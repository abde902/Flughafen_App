/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *buttonOpenFile;
    QPushButton *saveButton;
    QLineEdit *ID;
    QLineEdit *Name;
    QLabel *label;
    QLabel *label_2;
    QLabel *kunden;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1123, 727);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        buttonOpenFile = new QPushButton(centralwidget);
        buttonOpenFile->setObjectName("buttonOpenFile");
        buttonOpenFile->setGeometry(QRect(910, 630, 101, 31));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(910, 580, 83, 29));
        ID = new QLineEdit(centralwidget);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(200, 160, 181, 28));
        Name = new QLineEdit(centralwidget);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(200, 200, 181, 28));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 160, 101, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 199, 91, 21));
        kunden = new QLabel(centralwidget);
        kunden->setObjectName("kunden");
        kunden->setGeometry(QRect(70, 100, 63, 20));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(90, 270, 561, 271));
        tableWidget->setTextElideMode(Qt::ElideLeft);
        tableWidget->setRowCount(0);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 250, 63, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1123, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        buttonOpenFile->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "speichern", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID                 :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Name           :", nullptr));
        kunden->setText(QCoreApplication::translate("MainWindow", "kund*in:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Reisen:", nullptr));
    } // retranslateUi

};

namespace Ui {
class MainWindow: publicprivate slots:
                                         void on_tableWidget_cellChanged(int row, int column);
Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
