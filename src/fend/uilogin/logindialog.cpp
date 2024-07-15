#include "logindialog.h"
#include "src/bend/man/mandb.h"
#include "ui_logindialog.h"

#include <QMessageBox>
#include <QMouseEvent>
#include <QDebug>
#include <QKeyEvent>
#include <QCompleter>

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
}

LoginDialog::~LoginDialog()
{
    delete ui;
    qDebug("delete LoginDialog");
}

void LoginDialog::updateLoginInfo()
{
    QStringList words = MDB->loginNameList();
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
    if (ui->lineSecretId->text().trimmed() == "zhangsan"
        && ui->lineSecretKey->text().trimmed() == "123")
    {
        accept();
        if (ui->checkSaveSection->isChecked())
        {
            //保存登录信息
            MDB->saveLoginInfo(
                ui->lineLoginName->text(),
                ui->lineSecretId->text(),
                ui->lineSecretKey->text(),
                ui->lineRemark->text()
            );
        }
        else
        {
            //删除登录信息
            MDB->removeLoginInfo(ui->lineSecretId->text());
        }
        updateLoginInfo();
    }
    else
    {
        QMessageBox::warning(
            this, QString::fromUtf8("登录失败"),
            QString::fromUtf8("请检查SecretId或SecretKey是否正确"));
    }
//    accept();
}


void LoginDialog::on_btnClose_clicked()
{
    reject();
}

