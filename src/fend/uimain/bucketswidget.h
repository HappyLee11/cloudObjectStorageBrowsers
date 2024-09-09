#ifndef BUCKETSWIDGET_H
#define BUCKETSWIDGET_H

#include "src/middle/models/cloudmodels.h"
#include <QWidget>

namespace Ui {
class BucketsWidget;
}

class BucketsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BucketsWidget(QWidget *parent = nullptr);
    ~BucketsWidget();

private slots:
    void onBuckets(const QList<MyBucket>& buckets);

private:
    Ui::BucketsWidget *ui;
};

#endif // BUCKETSWIDGET_H
