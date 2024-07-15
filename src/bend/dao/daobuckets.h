#ifndef DAOBUCKETS_H
#define DAOBUCKETS_H


#include "src/middle/models/cloudmodels.h"
#include <QList>

class DaoBuckets
{
public:
    DaoBuckets();

    QList<MyBucket> bucketsFromMock(const QString& path);
};

#endif // DAOBUCKETS_H
