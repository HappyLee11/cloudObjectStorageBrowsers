#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginDialog;
}
QT_END_NAMESPACE

class LoginDialog : public QMainWindow
{
    Q_OBJECT

public:
    LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private:
    Ui::LoginDialog *ui;
};
#endif // LOGINDIALOG_H
