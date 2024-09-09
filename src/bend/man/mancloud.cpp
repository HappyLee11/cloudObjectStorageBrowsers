#include "mancloud.h"
#include "src/middle/manglobal.h"
#include "src/middle/signals/mansignals.h"
#include "src/plugins/manplugin.h"
#include <QDebug>
#include <src/bend/dao/clouds/daocloudsmock.h>


ManCloud::ManCloud(QObject *parent)
    : QObject{parent}
{

}

ManCloud::~ManCloud()
{
    qDebug("delete ManCloud ");
}

void ManCloud::login(QString secretId, QString secretKey)
{
    QList<MyBucket> buckets = MG->mPlugin->clouds()->login(secretId, secretKey);
    emit MG->mSignal->bucketsSuccess(buckets);
}
