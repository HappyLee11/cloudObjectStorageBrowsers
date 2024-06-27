#ifndef UIMAIN_H
#define UIMAIN_H

#include <QWidget>


namespace Ui {
class uimain;
}

class LoginDialog;


class uimain : public QWidget
{
    Q_OBJECT

public:
    explicit uimain(QWidget *parent = nullptr);
    ~uimain();

    void showLoginDialog();


private:
    Ui::uimain *ui;

    LoginDialog* m_loginDialog = nullptr;
};

#endif // UIMAIN_H
