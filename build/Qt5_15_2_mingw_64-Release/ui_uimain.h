/********************************************************************************
** Form generated from reading UI file 'uimain.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIMAIN_H
#define UI_UIMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/fend/uicom/breadwidget.h"
#include "src/fend/uicom/pagewidget.h"
#include "src/fend/uimain/bucketswidget.h"
#include "src/fend/uimain/objectswidget.h"
#include "src/fend/uimain/toolbarwidget.h"

QT_BEGIN_NAMESPACE

class Ui_UiMain
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    BucketsWidget *widget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    ToolBarWidget *widgetToolBar;
    BreadWidget *widgetBread;
    ObjectsWidget *widgetObjects;
    PageWidget *widgetPage;

    void setupUi(QWidget *UiMain)
    {
        if (UiMain->objectName().isEmpty())
            UiMain->setObjectName(QString::fromUtf8("UiMain"));
        UiMain->resize(943, 571);
        UiMain->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(UiMain);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter = new QSplitter(UiMain);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget = new BucketsWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        splitter->addWidget(widget);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetToolBar = new ToolBarWidget(layoutWidget);
        widgetToolBar->setObjectName(QString::fromUtf8("widgetToolBar"));

        verticalLayout->addWidget(widgetToolBar);

        widgetBread = new BreadWidget(layoutWidget);
        widgetBread->setObjectName(QString::fromUtf8("widgetBread"));

        verticalLayout->addWidget(widgetBread);

        widgetObjects = new ObjectsWidget(layoutWidget);
        widgetObjects->setObjectName(QString::fromUtf8("widgetObjects"));

        verticalLayout->addWidget(widgetObjects);

        widgetPage = new PageWidget(layoutWidget);
        widgetPage->setObjectName(QString::fromUtf8("widgetPage"));

        verticalLayout->addWidget(widgetPage);

        verticalLayout->setStretch(2, 1);
        splitter->addWidget(layoutWidget);

        horizontalLayout->addWidget(splitter);


        retranslateUi(UiMain);

        QMetaObject::connectSlotsByName(UiMain);
    } // setupUi

    void retranslateUi(QWidget *UiMain)
    {
        UiMain->setWindowTitle(QCoreApplication::translate("UiMain", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiMain: public Ui_UiMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIMAIN_H
