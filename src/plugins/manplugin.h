#ifndef MANPLUGIN_H
#define MANPLUGIN_H

#include <QObject>

class DaoClouds;
class Version;

#define MP ManPlugin::instance()

class ManPlugin : public QObject
{
    Q_OBJECT
public:
    explicit ManPlugin(QObject *parent = nullptr);

     ~ManPlugin(); // 声明析构函数

    static ManPlugin *instance();

    DaoClouds *clouds() const;

    void installPlugins(int argc, char *argv[]);

private:

    DaoClouds *m_clouds;
    Version *m_version;

signals:



};


#endif // MANPLUGIN_H
