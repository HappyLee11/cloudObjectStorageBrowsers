#include "toolbarwidget.h"
#include "ui_toolbarwidget.h"
#include <QFileDialog>
#include <QDebug>

toolbarwidget::toolbarwidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::toolbarwidget)
{
    ui->setupUi(this);
    connect(ui->btnQuit,&QPushButton ::clicked,this,&toolbarwidget::quitLogin);
}

toolbarwidget::~toolbarwidget()
{
    delete ui;

}

void toolbarwidget::on_btnQuit_clicked()
{

}


void toolbarwidget::on_btnupdate_clicked()
{
    //上传，单个文件
    //QString path = QFileDialog::getOpenFileName(this,QString::fromUtf8("上传"),"./");

    //上传，多个文件
    QStringList pathList = QFileDialog::getOpenFileNames(this,QString::fromUtf8("上传"),"./");

    //上传，多个文件，指定类型
    // QStringList pathlist1 = QFileDialog::getOpenFileNames(this,
    //                             QString::fromLocal8Bit("上传"),
    //                               "./",
    //                               "happ (*.h *.cpp);;<akeFile(*.Release *.Debug)");


    //上传，文件夹
    //QString path = QFileDialog::getExistingDirectory(this,QString::fromUtf8("上传"),"./");


    qDebug()<<pathList;
}


void toolbarwidget::on_btndownload_clicked()
{
    //上传，多个文件
    QString path = QFileDialog::getSaveFileName(this,QString::fromUtf8("上传"),"./");

}

