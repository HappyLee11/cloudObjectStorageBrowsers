#include "logindialog.h"
#include "./ui_logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint);

    QPixmap pixmap("C:\\CppProjects\\cloudObjectStorageBrowsers\\resources\\image\\lotusLeaf.png");

    ui->labelLogo->setPixmap(pixmap.scaled(ui->labelLogo->size()));

}



LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButton_clicked()
{
    reject();
}


void LoginDialog::on_labelLogo_linkActivated(const QString &link)
{

}


void LoginDialog::on_denglu_clicked()
{
    //reject();登录信息验证
    if(ui->lineEditSceretID->text().trimmed()=="zhangsan"
        && ui->lineEditSceretKey->text().trimmed()=="123")
    {
        accept();
    }
    else
    {
        QMessageBox::warning(
            this,QString::fromUtf8("登录失败"),
            QString::fromUtf8("请检查登录账户和密码"));
    }
}

