#include "uimain.h"
#include "ui_uimain.h"

#include <src/fend/uilogin/logindialog.h>
#include <QDebug>

UiMain::UiMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UiMain)
{
    ui->setupUi(this);
    ui->splitter->setStretchFactor(0, 1);
    ui->splitter->setStretchFactor(1, 4);
    qDebug() << typeid(ui->splitter).name();

    connect(ui->widgetToolBar, &ToolBarWidget::buttonClicked, this, &UiMain::onButtonClicked);

    // children 直接儿子节点，第一级子节点
//    QObjectList objList = children();
//    for(auto obj: objList){
//        qDebug() << obj->objectName();
//    }
}

UiMain::~UiMain()
{
    qDebug("delete UiMain");
    delete ui;
    if (m_loginDialog)
    {
        delete m_loginDialog;
    }
}

void UiMain::showLoginDialog()
{
    if (m_loginDialog == nullptr)
    {
        m_loginDialog = new LoginDialog();
        m_loginDialog->updateLoginInfo();
        connect(m_loginDialog, &LoginDialog::accepted, this, &UiMain::show);
    }
    hide();
    m_loginDialog->show();
}

void UiMain::onButtonClicked(const QString &text)
{
    qDebug() << text;
    if (text == QString::fromLocal8Bit("上传"))
    {
        onUpload();
    }
    else if (text == QString::fromLocal8Bit("退出登录"))
    {
        onUnLogin();
    }
}

void UiMain::onUpload()
{
    qDebug() << "onUpload";
}

void UiMain::onDownload()
{
    qDebug() << "onDownload";
}

void UiMain::onRefresh()
{
    qDebug() << "onRefresh";
}

void UiMain::onUnLogin()
{
    showLoginDialog();
}
