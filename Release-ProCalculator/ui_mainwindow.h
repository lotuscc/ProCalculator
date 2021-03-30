/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLCDNumber *lcdNumber_Dec;
    QLCDNumber *lcdNumber_Hex;
    QLineEdit *lineEdit;
    QPushButton *pushButton_Dec;
    QPushButton *pushButton_Hex;
    QLCDNumber *lcdNumber_MB;
    QLCDNumber *lcdNumber_KB;
    QLCDNumber *lcdNumber_GB;
    QLabel *label_GB;
    QLabel *label_KB;
    QLabel *label_MB;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 306);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lcdNumber_Dec = new QLCDNumber(centralWidget);
        lcdNumber_Dec->setObjectName(QStringLiteral("lcdNumber_Dec"));
        lcdNumber_Dec->setGeometry(QRect(10, 0, 351, 23));
        lcdNumber_Dec->setDigitCount(32);
        lcdNumber_Dec->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Dec->setProperty("value", QVariant(0));
        lcdNumber_Hex = new QLCDNumber(centralWidget);
        lcdNumber_Hex->setObjectName(QStringLiteral("lcdNumber_Hex"));
        lcdNumber_Hex->setGeometry(QRect(10, 30, 351, 23));
        lcdNumber_Hex->setDigitCount(32);
        lcdNumber_Hex->setMode(QLCDNumber::Hex);
        lcdNumber_Hex->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Hex->setProperty("value", QVariant(0));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 120, 371, 36));
        pushButton_Dec = new QPushButton(centralWidget);
        pushButton_Dec->setObjectName(QStringLiteral("pushButton_Dec"));
        pushButton_Dec->setGeometry(QRect(40, 170, 106, 36));
        pushButton_Hex = new QPushButton(centralWidget);
        pushButton_Hex->setObjectName(QStringLiteral("pushButton_Hex"));
        pushButton_Hex->setGeometry(QRect(190, 170, 106, 36));
        lcdNumber_MB = new QLCDNumber(centralWidget);
        lcdNumber_MB->setObjectName(QStringLiteral("lcdNumber_MB"));
        lcdNumber_MB->setGeometry(QRect(160, 80, 64, 23));
        lcdNumber_MB->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_KB = new QLCDNumber(centralWidget);
        lcdNumber_KB->setObjectName(QStringLiteral("lcdNumber_KB"));
        lcdNumber_KB->setGeometry(QRect(280, 80, 64, 23));
        lcdNumber_KB->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_GB = new QLCDNumber(centralWidget);
        lcdNumber_GB->setObjectName(QStringLiteral("lcdNumber_GB"));
        lcdNumber_GB->setGeometry(QRect(40, 80, 64, 23));
        lcdNumber_GB->setSegmentStyle(QLCDNumber::Flat);
        label_GB = new QLabel(centralWidget);
        label_GB->setObjectName(QStringLiteral("label_GB"));
        label_GB->setGeometry(QRect(110, 80, 31, 20));
        label_KB = new QLabel(centralWidget);
        label_KB->setObjectName(QStringLiteral("label_KB"));
        label_KB->setGeometry(QRect(350, 80, 21, 20));
        label_MB = new QLabel(centralWidget);
        label_MB->setObjectName(QStringLiteral("label_MB"));
        label_MB->setGeometry(QRect(230, 80, 21, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 34));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_Dec->setText(QApplication::translate("MainWindow", "10", nullptr));
        pushButton_Hex->setText(QApplication::translate("MainWindow", "16", nullptr));
        label_GB->setText(QApplication::translate("MainWindow", "GB", nullptr));
        label_KB->setText(QApplication::translate("MainWindow", "KB", nullptr));
        label_MB->setText(QApplication::translate("MainWindow", "MB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
