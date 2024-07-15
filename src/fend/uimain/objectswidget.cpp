#include "objectswidget.h"
#include "src/bend/man/mancloud.h"
#include "ui_objectswidget.h"

#include <src/fend/uidelegates/bucketdelegate.h>
#include <QDebug>

ObjectsWidget::ObjectsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ObjectsWidget)
{
    ui->setupUi(this);
    ui->tableView->setModel(MC->model());
//    ui->tableView->setItemDelegate(new BucketDelegate());
    ui->tableView->setItemDelegateForColumn(1, new BucketDelegate());

    // 设置标题内容
    QStandardItemModel* model = MC->model();
    QStringList labels;
    labels << QString::fromUtf8("桶名称")
           << QString::fromUtf8("地区")
           << QString::fromUtf8("创建时间");
    model->setColumnCount(labels.size());
    model->setHorizontalHeaderLabels(labels);

    // 设置列宽度
    ui->tableView->setColumnWidth(0, 200);
    ui->tableView->setColumnWidth(1, 120);
    ui->tableView->horizontalHeader()->setStretchLastSection(true); //设置最后一列占满整个表
//    ui->tableView->setColumnWidth(2, 200);

    // 隐藏垂直标题
    ui->tableView->verticalHeader()->setHidden(true);

    // 设置鼠标点击排序
    ui->tableView->setSortingEnabled(true);
}

ObjectsWidget::~ObjectsWidget()
{
    delete ui;
    qDebug("delete ObjectsWidget");
}
