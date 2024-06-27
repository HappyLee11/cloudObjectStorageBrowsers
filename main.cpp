#include "src/fend/uiLogin/logindialog.h"
#include "src/fend/uiMain/uimain.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QWidget>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "cloudObjectStorageBrowsers_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    //登录窗口
    LoginDialog l;
    uimain m;
    m.setWindowTitle(QString::fromUtf8("主窗口"));

    // int lcode =  l.exec();//使用exec()显示主窗口，窗口直接设置成了模态窗口
    // if(lcode == QDialog::Accepted)
    // {
        //m.showLoginDialog();
    m.show();
        return a.exec();
    // }
    // else{
    //     qDebug()<<QString::fromUtf8("退出程序");
    // }




}
