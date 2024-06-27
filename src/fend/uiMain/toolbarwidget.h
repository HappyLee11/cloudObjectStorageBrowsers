#ifndef TOOLBARWIDGET_H
#define TOOLBARWIDGET_H

#include <QWidget>

namespace Ui {
class toolbarwidget;
}

class toolbarwidget : public QWidget
{
    Q_OBJECT

public:
    explicit toolbarwidget(QWidget *parent = nullptr);
    ~toolbarwidget();


signals:
    void quitLogin();

private slots:
    void on_btnQuit_clicked();

    void on_btnupdate_clicked();

    void on_btndownload_clicked();

private:
    Ui::toolbarwidget *ui;
};

#endif // TOOLBARWIDGET_H
