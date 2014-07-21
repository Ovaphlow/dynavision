/********************************************************************************
** Form generated from reading UI file 'eagleye_demo.ui'
**
** Created: Mon Sep 3 14:05:07 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EAGLEYE_DEMO_H
#define UI_EAGLEYE_DEMO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eagleye_demoClass
{
public:
    QGridLayout *gridLayout;
    QLabel *labelImage;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *openCapture;
    QPushButton *closeCapture;
    QTextEdit *textEdit;

    void setupUi(QWidget *eagleye_demoClass)
    {
        if (eagleye_demoClass->objectName().isEmpty())
            eagleye_demoClass->setObjectName(QString::fromUtf8("eagleye_demoClass"));
        eagleye_demoClass->resize(800, 450);
        gridLayout = new QGridLayout(eagleye_demoClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelImage = new QLabel(eagleye_demoClass);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelImage->sizePolicy().hasHeightForWidth());
        labelImage->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelImage, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        openCapture = new QPushButton(eagleye_demoClass);
        openCapture->setObjectName(QString::fromUtf8("openCapture"));

        horizontalLayout->addWidget(openCapture);

        closeCapture = new QPushButton(eagleye_demoClass);
        closeCapture->setObjectName(QString::fromUtf8("closeCapture"));

        horizontalLayout->addWidget(closeCapture);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(eagleye_demoClass);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(textEdit);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(eagleye_demoClass);

        QMetaObject::connectSlotsByName(eagleye_demoClass);
    } // setupUi

    void retranslateUi(QWidget *eagleye_demoClass)
    {
        eagleye_demoClass->setWindowTitle(QApplication::translate("eagleye_demoClass", "\346\231\272\350\203\275\347\233\221\346\216\247", 0, QApplication::UnicodeUTF8));
        labelImage->setText(QString());
        openCapture->setText(QApplication::translate("eagleye_demoClass", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", 0, QApplication::UnicodeUTF8));
        closeCapture->setText(QApplication::translate("eagleye_demoClass", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class eagleye_demoClass: public Ui_eagleye_demoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EAGLEYE_DEMO_H
