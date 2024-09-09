/********************************************************************************
** Form generated from reading UI file 'breadwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BREADWIDGET_H
#define UI_BREADWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BreadWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *BreadWidget)
    {
        if (BreadWidget->objectName().isEmpty())
            BreadWidget->setObjectName(QString::fromUtf8("BreadWidget"));
        BreadWidget->resize(423, 23);
        horizontalLayout = new QHBoxLayout(BreadWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(BreadWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(BreadWidget);

        QMetaObject::connectSlotsByName(BreadWidget);
    } // setupUi

    void retranslateUi(QWidget *BreadWidget)
    {
        BreadWidget->setWindowTitle(QCoreApplication::translate("BreadWidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("BreadWidget", "\345\255\230\345\202\250\346\241\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BreadWidget: public Ui_BreadWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BREADWIDGET_H
