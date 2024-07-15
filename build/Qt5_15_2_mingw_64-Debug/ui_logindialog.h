/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frameTitle;
    QHBoxLayout *horizontalLayout;
    QLabel *labelLogo;
    QLabel *labelTitle;
    QPushButton *btnClose;
    QFrame *line;
    QFrame *frameBody;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelLoginName;
    QLineEdit *lineLoginName;
    QLabel *labelSecretId;
    QLineEdit *lineSecretId;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelSecretKey;
    QLineEdit *lineSecretKey;
    QSpacerItem *verticalSpacer_4;
    QLabel *labelRemark;
    QLineEdit *lineRemark;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *checkSaveSection;
    QPushButton *btnLogin;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(404, 428);
        LoginDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(LoginDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frameTitle = new QFrame(LoginDialog);
        frameTitle->setObjectName(QString::fromUtf8("frameTitle"));
        frameTitle->setFrameShape(QFrame::StyledPanel);
        frameTitle->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameTitle);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelLogo = new QLabel(frameTitle);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));
        labelLogo->setMinimumSize(QSize(0, 0));
        labelLogo->setMaximumSize(QSize(32, 32));

        horizontalLayout->addWidget(labelLogo);

        labelTitle = new QLabel(frameTitle);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        QFont font;
        font.setBold(false);
        labelTitle->setFont(font);

        horizontalLayout->addWidget(labelTitle);

        btnClose = new QPushButton(frameTitle);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setMaximumSize(QSize(32, 32));

        horizontalLayout->addWidget(btnClose);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addWidget(frameTitle);

        line = new QFrame(LoginDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        frameBody = new QFrame(LoginDialog);
        frameBody->setObjectName(QString::fromUtf8("frameBody"));
        frameBody->setFrameShape(QFrame::StyledPanel);
        frameBody->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameBody);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(40, -1, 40, -1);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        labelLoginName = new QLabel(frameBody);
        labelLoginName->setObjectName(QString::fromUtf8("labelLoginName"));

        verticalLayout->addWidget(labelLoginName);

        lineLoginName = new QLineEdit(frameBody);
        lineLoginName->setObjectName(QString::fromUtf8("lineLoginName"));

        verticalLayout->addWidget(lineLoginName);

        labelSecretId = new QLabel(frameBody);
        labelSecretId->setObjectName(QString::fromUtf8("labelSecretId"));

        verticalLayout->addWidget(labelSecretId);

        lineSecretId = new QLineEdit(frameBody);
        lineSecretId->setObjectName(QString::fromUtf8("lineSecretId"));
        lineSecretId->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(lineSecretId);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        labelSecretKey = new QLabel(frameBody);
        labelSecretKey->setObjectName(QString::fromUtf8("labelSecretKey"));

        verticalLayout->addWidget(labelSecretKey);

        lineSecretKey = new QLineEdit(frameBody);
        lineSecretKey->setObjectName(QString::fromUtf8("lineSecretKey"));
        lineSecretKey->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(lineSecretKey);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        labelRemark = new QLabel(frameBody);
        labelRemark->setObjectName(QString::fromUtf8("labelRemark"));

        verticalLayout->addWidget(labelRemark);

        lineRemark = new QLineEdit(frameBody);
        lineRemark->setObjectName(QString::fromUtf8("lineRemark"));
        lineRemark->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(lineRemark);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        checkSaveSection = new QCheckBox(frameBody);
        checkSaveSection->setObjectName(QString::fromUtf8("checkSaveSection"));

        verticalLayout->addWidget(checkSaveSection);

        btnLogin = new QPushButton(frameBody);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(btnLogin);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);


        verticalLayout_2->addWidget(frameBody);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_2->setStretch(2, 1);
#if QT_CONFIG(shortcut)
        labelSecretId->setBuddy(lineSecretId);
        labelSecretKey->setBuddy(lineSecretKey);
#endif // QT_CONFIG(shortcut)

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        labelLogo->setText(QString());
        labelTitle->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225\347\252\227\345\217\243", nullptr));
        btnClose->setText(QCoreApplication::translate("LoginDialog", "\303\227", nullptr));
        labelLoginName->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225\345\220\215", nullptr));
        labelSecretId->setText(QCoreApplication::translate("LoginDialog", "Sectet&Id", nullptr));
        labelSecretKey->setText(QCoreApplication::translate("LoginDialog", "Sectet&Key", nullptr));
        labelRemark->setText(QCoreApplication::translate("LoginDialog", "\345\244\207\346\263\250", nullptr));
        checkSaveSection->setText(QCoreApplication::translate("LoginDialog", "\350\256\260\344\275\217\344\274\232\350\257\235", nullptr));
        btnLogin->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
