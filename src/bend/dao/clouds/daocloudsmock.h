#ifndef DAOCLOUDSMOCK_H
#define DAOCLOUDSMOCK_H
#include "src/middle/models/cloudmodels.h"
#include <QString>
#include <QJsonValue>
#include "daoclouds.h"

class DaoCloudsMock:public DaoClouds
{
public:
    DaoCloudsMock(const QString& path);

    virtual QList<MyBucket> buckets();
    virtual QList<MyBucket> login(const QString& secretId, const QString& secretKey);

private:
    QJsonValue m_mock;
};

#endif // DAOCLOUDSMOCK_H
