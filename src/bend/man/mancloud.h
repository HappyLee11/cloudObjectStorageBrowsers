#ifndef ManCloud_H
#define ManCloud_H

#include <QObject>
#include <QStandardItemModel>

#define MC ManCloud::instance()

class ManCloud : public QObject
{
    Q_OBJECT
public:
    //不要使用ManCloud构造函数创建对象，直接使用instance来使用对象即可
    explicit ManCloud(QObject *parent = nullptr);

    static ManCloud* instance();

    void setBuckets();
    QStandardItemModel *model() const;

private:
    QStandardItemModel* m_model = nullptr;

};

#endif // ManCloud_H
