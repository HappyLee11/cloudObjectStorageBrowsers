#ifndef MANPLUGIN_H
#define MANPLUGIN_H

#include "src/bend/dao/clouds/daocloudsmock.h"

#include <QObject>

class DaoClouds;

#define MP ManPlugin::instance()

class ManPlugin : public QObject
{
    Q_OBJECT
public:
    explicit ManPlugin(QObject *parent = nullptr);

    static ManPlugin *instance();

    DaoClouds *clouds() const;

private:
    void installPlugins();
    DaoClouds *m_clouds;

signals:



};

#endif // MANPLUGIN_H
