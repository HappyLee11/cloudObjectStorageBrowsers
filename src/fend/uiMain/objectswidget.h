#ifndef OBJECTSWIDGET_H
#define OBJECTSWIDGET_H

#include <QWidget>

namespace Ui {
class objectswidget;
}

class objectswidget : public QWidget
{
    Q_OBJECT

public:
    explicit objectswidget(QWidget *parent = nullptr);
    ~objectswidget();

private:
    Ui::objectswidget *ui;
};

#endif // OBJECTSWIDGET_H
