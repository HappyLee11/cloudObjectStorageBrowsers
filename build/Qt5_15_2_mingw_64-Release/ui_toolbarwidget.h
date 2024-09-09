/********************************************************************************
** Form generated from reading UI file 'toolbarwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLBARWIDGET_H
#define UI_TOOLBARWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToolBarWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCreate;
    QPushButton *btnUpload;
    QPushButton *btnDownLoad;
    QPushButton *btnRefresh;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnQuit;
    QPushButton *btnTrans;

    void setupUi(QWidget *ToolBarWidget)
    {
        if (ToolBarWidget->objectName().isEmpty())
            ToolBarWidget->setObjectName(QString::fromUtf8("ToolBarWidget"));
        ToolBarWidget->resize(526, 28);
        horizontalLayout = new QHBoxLayout(ToolBarWidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnCreate = new QPushButton(ToolBarWidget);
        btnCreate->setObjectName(QString::fromUtf8("btnCreate"));
        btnCreate->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(btnCreate);

        btnUpload = new QPushButton(ToolBarWidget);
        btnUpload->setObjectName(QString::fromUtf8("btnUpload"));
        btnUpload->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(btnUpload);

        btnDownLoad = new QPushButton(ToolBarWidget);
        btnDownLoad->setObjectName(QString::fromUtf8("btnDownLoad"));
        btnDownLoad->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(btnDownLoad);

        btnRefresh = new QPushButton(ToolBarWidget);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));
        btnRefresh->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(btnRefresh);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnQuit = new QPushButton(ToolBarWidget);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));
        btnQuit->setMinimumSize(QSize(70, 0));
        btnQuit->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(btnQuit);

        btnTrans = new QPushButton(ToolBarWidget);
        btnTrans->setObjectName(QString::fromUtf8("btnTrans"));
        btnTrans->setMinimumSize(QSize(70, 0));
        btnTrans->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(btnTrans);


        retranslateUi(ToolBarWidget);

        QMetaObject::connectSlotsByName(ToolBarWidget);
    } // setupUi

    void retranslateUi(QWidget *ToolBarWidget)
    {
        ToolBarWidget->setWindowTitle(QCoreApplication::translate("ToolBarWidget", "Form", nullptr));
        btnCreate->setText(QCoreApplication::translate("ToolBarWidget", "\345\210\233\345\273\272\346\241\266", nullptr));
        btnUpload->setText(QCoreApplication::translate("ToolBarWidget", "\344\270\212\344\274\240", nullptr));
        btnDownLoad->setText(QCoreApplication::translate("ToolBarWidget", "\344\270\213\350\275\275", nullptr));
        btnRefresh->setText(QCoreApplication::translate("ToolBarWidget", "\345\210\267\346\226\260", nullptr));
        btnQuit->setText(QCoreApplication::translate("ToolBarWidget", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        btnTrans->setText(QCoreApplication::translate("ToolBarWidget", "\344\274\240\350\276\223\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToolBarWidget: public Ui_ToolBarWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBARWIDGET_H
