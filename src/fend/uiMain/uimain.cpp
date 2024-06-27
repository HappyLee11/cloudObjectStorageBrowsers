#include "uimain.h"
#include "ui_uimain.h"
#include <src/fend/uiLogin/logindialog.h>

uimain::uimain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::uimain)
{
    ui->setupUi(this);
    ui->splitter->setStretchFactor(0,1);
    ui->splitter->setStretchFactor(1,4);
}

uimain::~uimain()
{
    delete ui;
    if(m_loginDialog)
    {
        delete m_loginDialog;
    }
}

void uimain::showLoginDialog()
{
    if(m_loginDialog == nullptr)
    {
        m_loginDialog = new LoginDialog();
        connect(m_loginDialog,&LoginDialog::accepted,this,&uimain::show);
        connect(ui->widgetToolBar,&toolbarwidget::quitLogin,this,&uimain::showLoginDialog);
    }
    hide();
    m_loginDialog->show();
    //这行代码显示 LoginDialog 对话框。如果对话框已经显示，则不会有任何效果。如果对话框尚未显示，它将显示在屏幕上。
}
