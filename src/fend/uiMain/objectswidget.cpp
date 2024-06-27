#include "objectswidget.h"
#include "ui_objectswidget.h"

objectswidget::objectswidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::objectswidget)
{
    ui->setupUi(this);
}

objectswidget::~objectswidget()
{
    delete ui;
}
