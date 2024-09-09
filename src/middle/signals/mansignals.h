#ifndef MANSIGNALS_H
#define MANSIGNALS_H

#include "src/middle/models/cloudmodels.h"
#include <QObject>

class ManSignals : public QObject
{
    Q_OBJECT
public:
    explicit ManSignals(QObject *parent = nullptr);
    ~ManSignals();

signals:
    void loginSuccess();
    void error(int api, const QString& msg);
    void unLogin();
    void bucketsSuccess(const QList<MyBucket>& buckets);
};

#endif // MANSIGNALS_H
