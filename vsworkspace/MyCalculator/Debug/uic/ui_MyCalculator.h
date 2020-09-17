/********************************************************************************
** Form generated from reading UI file 'MyCalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCALCULATOR_H
#define UI_MYCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyCalculatorClass
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QLineEdit *lineEdit;
    QPushButton *button_0;
    QPushButton *button_2;
    QPushButton *button_1;
    QPushButton *button_3;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_4;
    QPushButton *button_7;
    QPushButton *button_8;
    QPushButton *button_9;
    QPushButton *button_plus;
    QPushButton *button_minus;
    QPushButton *button_multipy;
    QPushButton *button_devide;
    QPushButton *button_equal;
    QPushButton *button_clear;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyCalculatorClass)
    {
        if (MyCalculatorClass->objectName().isEmpty())
            MyCalculatorClass->setObjectName(QString::fromUtf8("MyCalculatorClass"));
        MyCalculatorClass->resize(659, 741);
        centralWidget = new QWidget(MyCalculatorClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 310, 210, 250));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 190, 30));
        button_0 = new QPushButton(widget);
        button_0->setObjectName(QString::fromUtf8("button_0"));
        button_0->setGeometry(QRect(10, 50, 40, 40));
        button_2 = new QPushButton(widget);
        button_2->setObjectName(QString::fromUtf8("button_2"));
        button_2->setGeometry(QRect(110, 50, 40, 40));
        button_1 = new QPushButton(widget);
        button_1->setObjectName(QString::fromUtf8("button_1"));
        button_1->setGeometry(QRect(60, 50, 40, 40));
        button_3 = new QPushButton(widget);
        button_3->setObjectName(QString::fromUtf8("button_3"));
        button_3->setGeometry(QRect(160, 50, 40, 40));
        button_5 = new QPushButton(widget);
        button_5->setObjectName(QString::fromUtf8("button_5"));
        button_5->setGeometry(QRect(60, 100, 40, 40));
        button_6 = new QPushButton(widget);
        button_6->setObjectName(QString::fromUtf8("button_6"));
        button_6->setGeometry(QRect(110, 100, 40, 40));
        button_4 = new QPushButton(widget);
        button_4->setObjectName(QString::fromUtf8("button_4"));
        button_4->setGeometry(QRect(10, 100, 41, 40));
        button_7 = new QPushButton(widget);
        button_7->setObjectName(QString::fromUtf8("button_7"));
        button_7->setGeometry(QRect(160, 100, 40, 40));
        button_8 = new QPushButton(widget);
        button_8->setObjectName(QString::fromUtf8("button_8"));
        button_8->setGeometry(QRect(10, 150, 40, 40));
        button_9 = new QPushButton(widget);
        button_9->setObjectName(QString::fromUtf8("button_9"));
        button_9->setGeometry(QRect(60, 150, 40, 40));
        button_plus = new QPushButton(widget);
        button_plus->setObjectName(QString::fromUtf8("button_plus"));
        button_plus->setGeometry(QRect(110, 150, 40, 40));
        button_minus = new QPushButton(widget);
        button_minus->setObjectName(QString::fromUtf8("button_minus"));
        button_minus->setGeometry(QRect(160, 150, 40, 40));
        button_multipy = new QPushButton(widget);
        button_multipy->setObjectName(QString::fromUtf8("button_multipy"));
        button_multipy->setGeometry(QRect(10, 200, 40, 40));
        button_devide = new QPushButton(widget);
        button_devide->setObjectName(QString::fromUtf8("button_devide"));
        button_devide->setGeometry(QRect(60, 200, 40, 40));
        button_equal = new QPushButton(widget);
        button_equal->setObjectName(QString::fromUtf8("button_equal"));
        button_equal->setGeometry(QRect(110, 200, 40, 40));
        button_clear = new QPushButton(widget);
        button_clear->setObjectName(QString::fromUtf8("button_clear"));
        button_clear->setGeometry(QRect(160, 200, 40, 40));
        MyCalculatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyCalculatorClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 659, 23));
        MyCalculatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyCalculatorClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyCalculatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyCalculatorClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyCalculatorClass->setStatusBar(statusBar);

        retranslateUi(MyCalculatorClass);

        QMetaObject::connectSlotsByName(MyCalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyCalculatorClass)
    {
        MyCalculatorClass->setWindowTitle(QCoreApplication::translate("MyCalculatorClass", "MyCalculator", nullptr));
        button_0->setText(QCoreApplication::translate("MyCalculatorClass", "0", nullptr));
        button_2->setText(QCoreApplication::translate("MyCalculatorClass", "2", nullptr));
        button_1->setText(QCoreApplication::translate("MyCalculatorClass", "1", nullptr));
        button_3->setText(QCoreApplication::translate("MyCalculatorClass", "3", nullptr));
        button_5->setText(QCoreApplication::translate("MyCalculatorClass", "5", nullptr));
        button_6->setText(QCoreApplication::translate("MyCalculatorClass", "6", nullptr));
        button_4->setText(QCoreApplication::translate("MyCalculatorClass", "4", nullptr));
        button_7->setText(QCoreApplication::translate("MyCalculatorClass", "7", nullptr));
        button_8->setText(QCoreApplication::translate("MyCalculatorClass", "8", nullptr));
        button_9->setText(QCoreApplication::translate("MyCalculatorClass", "9", nullptr));
        button_plus->setText(QCoreApplication::translate("MyCalculatorClass", "+", nullptr));
        button_minus->setText(QCoreApplication::translate("MyCalculatorClass", "-", nullptr));
        button_multipy->setText(QCoreApplication::translate("MyCalculatorClass", "*", nullptr));
        button_devide->setText(QCoreApplication::translate("MyCalculatorClass", "/", nullptr));
        button_equal->setText(QCoreApplication::translate("MyCalculatorClass", "=", nullptr));
        button_clear->setText(QCoreApplication::translate("MyCalculatorClass", "c", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyCalculatorClass: public Ui_MyCalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCALCULATOR_H
