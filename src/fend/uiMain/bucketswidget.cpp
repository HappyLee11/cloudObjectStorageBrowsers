#include "bucketswidget.h"
#include "ui_bucketswidget.h"

bucketswidget::bucketswidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::bucketswidget)
{
    ui->setupUi(this);
}

bucketswidget::~bucketswidget()
{
    delete ui;
}
