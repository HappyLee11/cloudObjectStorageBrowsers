#include "logindialog.h"
#include "src/bend/man/mandb.h"
#include "ui_logindialog.h"
#include "src/middle/manglobal.h"
#include "src/middle/signals/mansignals.h"
#include "src/config/apis.h"
#include "src/bend/gateway.h"

#include <QMessageBox>
#include <QMouseEvent>
#include <QDebug>
#include <QKeyEvent>
#include <QCompleter>
#include <QJsonObject>

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint);

//    QPixmap pixmap("F:/mooc/lessions/code/mooc-lessons/12/12-5/static/imgs/logo.png");
//    ui->labelLogo->setPixmap(pixmap.scaled(ui->labelLogo->size()));

    ui->labelTitle->setProperty("style", "h3");
    ui->labelLoginName->setProperty("style", "h4");
    ui->labelSecretId->setProperty("style", "h4");
    ui->labelSecretKey->setProperty("style", "h4");
    ui->labelRemark->setProperty("style", "h4");
    ui->btnClose->setProperty("style", "h4");
    ui->btnLogin->setProperty("style", "h4");

    connect(MG->mSignal, &ManSignals::loginSuccess, this, &LoginDialog::onLoginSucceed);
    connect(MG->mSignal, &ManSignals::unLogin, this, &LoginDialog::show);
    connect(MG->mSignal, &ManSignals::error, this, &LoginDialog::onLoginError);
    updateLoginInfo();

}

LoginDialog::~LoginDialog()
{
    delete ui;
    qDebug("delete LoginDialog");
}

void LoginDialog::updateLoginInfo()
{
    QStringList words = MG->mDb->loginNameList();
    QCompleter* completer = new QCompleter(words);
    ui->lineLoginName->setCompleter(completer);

    connect(completer, static_cast<void (QCompleter::*)(const QString&)>(&QCompleter::activated),
            [&](const QString& name){
                LoginInfo info = MDB->loginInfoByName(name);
                ui->lineSecretId->setText(info.secret_id);
                ui->lineSecretKey->setText(info.secret_key);
                ui->lineRemark->setText(info.remark);
                ui->checkSaveSection->setChecked(true);
            });
}

void LoginDialog::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton){
        m_start = event->pos(); // 相对于父控件坐标原点的位置
    }
    QDialog::mousePressEvent(event);
}

void LoginDialog::mouseMoveEvent(QMouseEvent *event)
{
//    qDebug() << event->buttons() << Qt::LeftButton;
    if (event->buttons() & Qt::LeftButton){
        QPoint targetPos = event->pos()-m_start+pos();
        this->move(targetPos);
    }
    QDialog::mouseMoveEvent(event);
}

bool LoginDialog::eventFilter(QObject *watched, QEvent *event)
{
    // watched 表示需要关注的控件对象
    // event 表示传递给事件对象的事件
    if (watched == ui->lineSecretKey)
    {
        if (event->type() == QEvent::KeyPress)
        {
            QKeyEvent * keyEvent = static_cast<QKeyEvent*>(event);
            if (keyEvent->modifiers() == Qt::ControlModifier)
            {
                if (keyEvent->key() == Qt::Key_C || keyEvent->key() == Qt::Key_V)
                {
                    return true;  // true-事件已经被处理，不再往下传递；false-继续执行传递
                }
            }
        }
    }

    return QDialog::eventFilter(watched, event);
}

void LoginDialog::on_btnLogin_clicked()
{
    // 登录信息验证
    QJsonObject params;
    params["secretId"] = ui->lineSecretId->text().trimmed();
    params["secretKey"] = ui->lineSecretKey->text().trimmed();
    MG->mGate->send(API::LOGIN::NORMAL, params);
}


void LoginDialog::on_btnClose_clicked()
{
    reject();
}

void LoginDialog::onLoginSucceed()
{
    accept();
    if (ui->checkSaveSection->isChecked())
    {
        //保存登录信息
        MG->mDb->saveLoginInfo(
            ui->lineLoginName->text(),
            ui->lineSecretId->text(),
            ui->lineSecretKey->text(),
            ui->lineRemark->text()
            );
        updateLoginInfo();
    }
    else
    {
        //删除登录信息
        MG->mDb->removeLoginInfo(ui->lineSecretId->text());
    }

}

void LoginDialog::onLoginError(int api, const QString &msg)
{
    if (api != API::LOGIN::NORMAL)
        return;
    QMessageBox::warning(
        this, QString::fromLocal8Bit("登录失败"),
        QString::fromLocal8Bit("登录失败：%1").arg(msg));

}

