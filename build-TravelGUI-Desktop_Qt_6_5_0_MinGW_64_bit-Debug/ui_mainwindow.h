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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *buttonOpenFile;
    QListWidget *listWidgetBookings;
    QLabel *labelDontModify1;
    QLabel *labelDontModify2;
    QLabel *labelDontModify3;
    QLabel *labelId;
    QLineEdit *lineEditId;
    QLabel *labelPrice;
    QLineEdit *lineEditPrice;
    QLabel *labelFromDestination;
    QLabel *labelToDestination;
    QLabel *labelAirline;
    QLineEdit *lineEditFromDestination;
    QLineEdit *lineEditToDestination;
    QLineEdit *lineEditAirline;
    QLabel *labelFlightArrival;
    QLabel *labelFlightDeparture;
    QDateEdit *dateEditFlightArrival;
    QDateEdit *dateEditFlightDeparture;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1028, 603);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        buttonOpenFile = new QPushButton(centralwidget);
        buttonOpenFile->setObjectName("buttonOpenFile");
        buttonOpenFile->setGeometry(QRect(900, 510, 101, 31));
        listWidgetBookings = new QListWidget(centralwidget);
        listWidgetBookings->setObjectName("listWidgetBookings");
        listWidgetBookings->setGeometry(QRect(20, 20, 461, 521));
        labelDontModify1 = new QLabel(centralwidget);
        labelDontModify1->setObjectName("labelDontModify1");
        labelDontModify1->setGeometry(QRect(700, 110, 121, 31));
        QFont font;
        font.setPointSize(9);
        labelDontModify1->setFont(font);
        labelDontModify1->setAlignment(Qt::AlignCenter);
        labelDontModify2 = new QLabel(centralwidget);
        labelDontModify2->setObjectName("labelDontModify2");
        labelDontModify2->setGeometry(QRect(660, 310, 161, 31));
        labelDontModify2->setFont(font);
        labelDontModify2->setAlignment(Qt::AlignCenter);
        labelDontModify3 = new QLabel(centralwidget);
        labelDontModify3->setObjectName("labelDontModify3");
        labelDontModify3->setGeometry(QRect(540, 390, 121, 31));
        labelDontModify3->setFont(font);
        labelDontModify3->setAlignment(Qt::AlignCenter);
        labelId = new QLabel(centralwidget);
        labelId->setObjectName("labelId");
        labelId->setGeometry(QRect(500, 30, 51, 21));
        lineEditId = new QLineEdit(centralwidget);
        lineEditId->setObjectName("lineEditId");
        lineEditId->setGeometry(QRect(610, 30, 391, 28));
        labelPrice = new QLabel(centralwidget);
        labelPrice->setObjectName("labelPrice");
        labelPrice->setGeometry(QRect(500, 70, 63, 20));
        lineEditPrice = new QLineEdit(centralwidget);
        lineEditPrice->setObjectName("lineEditPrice");
        lineEditPrice->setGeometry(QRect(610, 70, 391, 28));
        labelFromDestination = new QLabel(centralwidget);
        labelFromDestination->setObjectName("labelFromDestination");
        labelFromDestination->setGeometry(QRect(490, 150, 121, 31));
        labelToDestination = new QLabel(centralwidget);
        labelToDestination->setObjectName("labelToDestination");
        labelToDestination->setGeometry(QRect(490, 190, 121, 20));
        labelAirline = new QLabel(centralwidget);
        labelAirline->setObjectName("labelAirline");
        labelAirline->setGeometry(QRect(490, 230, 121, 20));
        lineEditFromDestination = new QLineEdit(centralwidget);
        lineEditFromDestination->setObjectName("lineEditFromDestination");
        lineEditFromDestination->setGeometry(QRect(610, 150, 391, 28));
        lineEditToDestination = new QLineEdit(centralwidget);
        lineEditToDestination->setObjectName("lineEditToDestination");
        lineEditToDestination->setGeometry(QRect(610, 190, 391, 28));
        lineEditAirline = new QLineEdit(centralwidget);
        lineEditAirline->setObjectName("lineEditAirline");
        lineEditAirline->setGeometry(QRect(610, 230, 391, 28));
        labelFlightArrival = new QLabel(centralwidget);
        labelFlightArrival->setObjectName("labelFlightArrival");
        labelFlightArrival->setGeometry(QRect(490, 270, 63, 20));
        labelFlightDeparture = new QLabel(centralwidget);
        labelFlightDeparture->setObjectName("labelFlightDeparture");
        labelFlightDeparture->setGeometry(QRect(790, 270, 71, 21));
        dateEditFlightArrival = new QDateEdit(centralwidget);
        dateEditFlightArrival->setObjectName("dateEditFlightArrival");
        dateEditFlightArrival->setGeometry(QRect(560, 270, 110, 29));
        dateEditFlightDeparture = new QDateEdit(centralwidget);
        dateEditFlightDeparture->setObjectName("dateEditFlightDeparture");
        dateEditFlightDeparture->setGeometry(QRect(890, 270, 110, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1028, 25));
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
        labelDontModify1->setText(QCoreApplication::translate("MainWindow", "Flightbooking", nullptr));
        labelDontModify2->setText(QCoreApplication::translate("MainWindow", "Rentalcar Reservation", nullptr));
        labelDontModify3->setText(QCoreApplication::translate("MainWindow", "Hotelbooking", nullptr));
        labelId->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        labelPrice->setText(QCoreApplication::translate("MainWindow", "Price:", nullptr));
        labelFromDestination->setText(QCoreApplication::translate("MainWindow", "From Destination:", nullptr));
        labelToDestination->setText(QCoreApplication::translate("MainWindow", "To Destination:", nullptr));
        labelAirline->setText(QCoreApplication::translate("MainWindow", "Airline", nullptr));
        labelFlightArrival->setText(QCoreApplication::translate("MainWindow", "Arrival", nullptr));
        labelFlightDeparture->setText(QCoreApplication::translate("MainWindow", "Departure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
