#ifndef DAOCLOUDSCOS_H
#define DAOCLOUDSCOS_H
#include "daoclouds.h"

class DaoCloudsCos: public DaoClouds
{
public:
    DaoCloudsCos();

    virtual QList<MyBucket> buckets();
    virtual QList<MyBucket> login(const QString& secretId, const QString& secretKey);
};

#endif // DAOCLOUDSCOS_H
