﻿#include "mylineedit.h"

#include <QKeyEvent>

MyLineEdit::MyLineEdit(QWidget *parent):
    QLineEdit(parent)
{

}

void MyLineEdit::keyPressEvent(QKeyEvent *event)
{
    // 捕获ctrl+c和ctrl+v
    if (event->modifiers() == Qt::ControlModifier)
    {
        if (event->key() == Qt::Key_C || event->key() == Qt::Key_V)
        {
            return;
        }
    }
    QLineEdit::keyPressEvent(event);
}
