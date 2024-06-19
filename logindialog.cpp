#include "logindialog.h"
#include "./ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}
