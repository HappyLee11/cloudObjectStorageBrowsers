#include "bucketswidget.h"
#include "src/middle/manmodels.h"
#include "src/middle/manglobal.h"
#include "src/middle/signals/mansignals.h"
#include "ui_bucketswidget.h"

BucketsWidget::BucketsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BucketsWidget)
{
    ui->setupUi(this);
    ui->listView->setModel(MG->mModels->model());
    connect(MG->mSignal, &ManSignals::bucketsSuccess, this, &BucketsWidget::onBuckets);
}

BucketsWidget::~BucketsWidget()
{
    delete ui;
}

void BucketsWidget::onBuckets(const QList<MyBucket> &buckets)
{

}
