#ifndef BUCKETSWIDGET_H
#define BUCKETSWIDGET_H

#include <QWidget>

namespace Ui {
class bucketswidget;
}

class bucketswidget : public QWidget
{
    Q_OBJECT

public:
    explicit bucketswidget(QWidget *parent = nullptr);
    ~bucketswidget();

private:
    Ui::bucketswidget *ui;
};

#endif // BUCKETSWIDGET_H
