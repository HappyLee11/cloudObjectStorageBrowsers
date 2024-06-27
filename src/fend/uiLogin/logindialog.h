#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

//#include <QMainWindow>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginDialog;
}
QT_END_NAMESPACE

//class LoginDialog : public QMainWindow
class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private slots:
    void on_pushButton_clicked();

    void on_labelLogo_linkActivated(const QString &link);

    void on_denglu_clicked();

private:
    Ui::LoginDialog *ui;
};
#endif // LOGINDIALOG_H
