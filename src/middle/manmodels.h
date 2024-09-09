#ifndef MANMODELS_H
#define MANMODELS_H

#include <QObject>
#include <QStandardItemModel>
#include "src/middle/models/cloudmodels.h"

class ManModels : public QObject
{
    Q_OBJECT
public:
    explicit ManModels(QObject *parent = nullptr);

    QStandardItemModel *model() const;

signals:

private slots:
    void setBuckets(const QList<MyBucket>& buckets);

private:
    QStandardItemModel* m_model = nullptr;
};

#endif // MANMODELS_H
