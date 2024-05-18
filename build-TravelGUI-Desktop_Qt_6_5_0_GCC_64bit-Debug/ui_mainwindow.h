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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSearch_with_ID;
    QWidget *centralwidget;
    QPushButton *buttonOpenFile;
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
    QDateEdit *dateEditHotelTo;
    QDateEdit *dateEditHotelFrom;
    QLabel *labelHotelName;
    QLabel *labelHotelTo;
    QLabel *labelHotelFrom;
    QLabel *labelHotelTown;
    QLineEdit *lineEditHotelName;
    QLineEdit *lineEditHotelTown;
    QLineEdit *lineEditCarCompany;
    QLineEdit *lineEditCarPickupLocation;
    QLineEdit *lineEditCarReturnLocation;
    QDateEdit *dateEditCarFrom;
    QDateEdit *dateEditCarTo;
    QLabel *labelCarCompany;
    QLabel *labelCarPickupLocation;
    QLabel *labelCarReturnLocation;
    QLabel *labelCarFrom;
    QLabel *labelCarTo;
    QSpinBox *spinBoxCustomerId;
    QPushButton *pushButtonSearchCustomer;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QTableWidget *tableWidgetTravels;
    QTableWidget *tableWidgetBookings;
    QLabel *label;
    QLineEdit *lineEditTravelId;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menua;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1007, 594);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionSearch_with_ID = new QAction(MainWindow);
        actionSearch_with_ID->setObjectName("actionSearch_with_ID");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        buttonOpenFile = new QPushButton(centralwidget);
        buttonOpenFile->setObjectName("buttonOpenFile");
        buttonOpenFile->setGeometry(QRect(900, 510, 101, 31));
        labelDontModify1 = new QLabel(centralwidget);
        labelDontModify1->setObjectName("labelDontModify1");
        labelDontModify1->setGeometry(QRect(710, 90, 121, 31));
        QFont font;
        font.setPointSize(9);
        labelDontModify1->setFont(font);
        labelDontModify1->setAlignment(Qt::AlignCenter);
        labelDontModify2 = new QLabel(centralwidget);
        labelDontModify2->setObjectName("labelDontModify2");
        labelDontModify2->setGeometry(QRect(720, 350, 161, 31));
        labelDontModify2->setFont(font);
        labelDontModify2->setAlignment(Qt::AlignCenter);
        labelDontModify3 = new QLabel(centralwidget);
        labelDontModify3->setObjectName("labelDontModify3");
        labelDontModify3->setGeometry(QRect(710, 240, 121, 31));
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
        labelPrice->setGeometry(QRect(500, 60, 63, 20));
        lineEditPrice = new QLineEdit(centralwidget);
        lineEditPrice->setObjectName("lineEditPrice");
        lineEditPrice->setGeometry(QRect(610, 60, 391, 28));
        labelFromDestination = new QLabel(centralwidget);
        labelFromDestination->setObjectName("labelFromDestination");
        labelFromDestination->setGeometry(QRect(500, 110, 121, 31));
        labelToDestination = new QLabel(centralwidget);
        labelToDestination->setObjectName("labelToDestination");
        labelToDestination->setGeometry(QRect(500, 150, 121, 20));
        labelAirline = new QLabel(centralwidget);
        labelAirline->setObjectName("labelAirline");
        labelAirline->setGeometry(QRect(500, 180, 121, 20));
        lineEditFromDestination = new QLineEdit(centralwidget);
        lineEditFromDestination->setObjectName("lineEditFromDestination");
        lineEditFromDestination->setGeometry(QRect(610, 120, 391, 28));
        lineEditToDestination = new QLineEdit(centralwidget);
        lineEditToDestination->setObjectName("lineEditToDestination");
        lineEditToDestination->setGeometry(QRect(610, 150, 391, 28));
        lineEditAirline = new QLineEdit(centralwidget);
        lineEditAirline->setObjectName("lineEditAirline");
        lineEditAirline->setGeometry(QRect(610, 180, 391, 28));
        labelFlightArrival = new QLabel(centralwidget);
        labelFlightArrival->setObjectName("labelFlightArrival");
        labelFlightArrival->setGeometry(QRect(500, 220, 63, 20));
        labelFlightDeparture = new QLabel(centralwidget);
        labelFlightDeparture->setObjectName("labelFlightDeparture");
        labelFlightDeparture->setGeometry(QRect(810, 220, 71, 21));
        dateEditFlightArrival = new QDateEdit(centralwidget);
        dateEditFlightArrival->setObjectName("dateEditFlightArrival");
        dateEditFlightArrival->setGeometry(QRect(610, 220, 110, 29));
        dateEditFlightDeparture = new QDateEdit(centralwidget);
        dateEditFlightDeparture->setObjectName("dateEditFlightDeparture");
        dateEditFlightDeparture->setGeometry(QRect(890, 220, 110, 29));
        dateEditHotelTo = new QDateEdit(centralwidget);
        dateEditHotelTo->setObjectName("dateEditHotelTo");
        dateEditHotelTo->setGeometry(QRect(890, 340, 110, 26));
        dateEditHotelFrom = new QDateEdit(centralwidget);
        dateEditHotelFrom->setObjectName("dateEditHotelFrom");
        dateEditHotelFrom->setGeometry(QRect(610, 340, 110, 26));
        labelHotelName = new QLabel(centralwidget);
        labelHotelName->setObjectName("labelHotelName");
        labelHotelName->setGeometry(QRect(500, 270, 54, 17));
        labelHotelTo = new QLabel(centralwidget);
        labelHotelTo->setObjectName("labelHotelTo");
        labelHotelTo->setGeometry(QRect(830, 340, 54, 17));
        labelHotelFrom = new QLabel(centralwidget);
        labelHotelFrom->setObjectName("labelHotelFrom");
        labelHotelFrom->setGeometry(QRect(500, 340, 54, 17));
        labelHotelTown = new QLabel(centralwidget);
        labelHotelTown->setObjectName("labelHotelTown");
        labelHotelTown->setGeometry(QRect(500, 300, 54, 17));
        lineEditHotelName = new QLineEdit(centralwidget);
        lineEditHotelName->setObjectName("lineEditHotelName");
        lineEditHotelName->setGeometry(QRect(610, 270, 391, 28));
        lineEditHotelTown = new QLineEdit(centralwidget);
        lineEditHotelTown->setObjectName("lineEditHotelTown");
        lineEditHotelTown->setGeometry(QRect(610, 300, 391, 28));
        lineEditCarCompany = new QLineEdit(centralwidget);
        lineEditCarCompany->setObjectName("lineEditCarCompany");
        lineEditCarCompany->setGeometry(QRect(610, 380, 391, 28));
        lineEditCarPickupLocation = new QLineEdit(centralwidget);
        lineEditCarPickupLocation->setObjectName("lineEditCarPickupLocation");
        lineEditCarPickupLocation->setGeometry(QRect(610, 410, 391, 28));
        lineEditCarReturnLocation = new QLineEdit(centralwidget);
        lineEditCarReturnLocation->setObjectName("lineEditCarReturnLocation");
        lineEditCarReturnLocation->setGeometry(QRect(610, 440, 391, 28));
        dateEditCarFrom = new QDateEdit(centralwidget);
        dateEditCarFrom->setObjectName("dateEditCarFrom");
        dateEditCarFrom->setGeometry(QRect(610, 480, 110, 26));
        dateEditCarTo = new QDateEdit(centralwidget);
        dateEditCarTo->setObjectName("dateEditCarTo");
        dateEditCarTo->setGeometry(QRect(890, 480, 110, 26));
        labelCarCompany = new QLabel(centralwidget);
        labelCarCompany->setObjectName("labelCarCompany");
        labelCarCompany->setGeometry(QRect(500, 380, 91, 17));
        labelCarPickupLocation = new QLabel(centralwidget);
        labelCarPickupLocation->setObjectName("labelCarPickupLocation");
        labelCarPickupLocation->setGeometry(QRect(500, 410, 101, 17));
        labelCarReturnLocation = new QLabel(centralwidget);
        labelCarReturnLocation->setObjectName("labelCarReturnLocation");
        labelCarReturnLocation->setGeometry(QRect(500, 440, 101, 17));
        labelCarFrom = new QLabel(centralwidget);
        labelCarFrom->setObjectName("labelCarFrom");
        labelCarFrom->setGeometry(QRect(500, 480, 54, 17));
        labelCarTo = new QLabel(centralwidget);
        labelCarTo->setObjectName("labelCarTo");
        labelCarTo->setGeometry(QRect(830, 480, 54, 17));
        spinBoxCustomerId = new QSpinBox(centralwidget);
        spinBoxCustomerId->setObjectName("spinBoxCustomerId");
        spinBoxCustomerId->setGeometry(QRect(10, 10, 42, 26));
        pushButtonSearchCustomer = new QPushButton(centralwidget);
        pushButtonSearchCustomer->setObjectName("pushButtonSearchCustomer");
        pushButtonSearchCustomer->setGeometry(QRect(60, 10, 80, 25));
        labelName = new QLabel(centralwidget);
        labelName->setObjectName("labelName");
        labelName->setGeometry(QRect(10, 50, 54, 17));
        lineEditName = new QLineEdit(centralwidget);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(60, 50, 371, 25));
        lineEditName->setReadOnly(true);
        tableWidgetTravels = new QTableWidget(centralwidget);
        if (tableWidgetTravels->columnCount() < 3)
            tableWidgetTravels->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetTravels->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetTravels->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetTravels->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidgetTravels->setObjectName("tableWidgetTravels");
        tableWidgetTravels->setGeometry(QRect(10, 90, 421, 201));
        tableWidgetTravels->setSortingEnabled(false);
        tableWidgetTravels->setColumnCount(3);
        tableWidgetTravels->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidgetBookings = new QTableWidget(centralwidget);
        if (tableWidgetBookings->columnCount() < 4)
            tableWidgetBookings->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetBookings->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetBookings->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetBookings->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetBookings->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        tableWidgetBookings->setObjectName("tableWidgetBookings");
        tableWidgetBookings->setGeometry(QRect(10, 330, 421, 211));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 300, 54, 17));
        lineEditTravelId = new QLineEdit(centralwidget);
        lineEditTravelId->setObjectName("lineEditTravelId");
        lineEditTravelId->setGeometry(QRect(80, 300, 351, 21));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1007, 22));
        menua = new QMenu(menubar);
        menua->setObjectName("menua");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menua->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSearch_with_ID->setText(QCoreApplication::translate("MainWindow", "Search with ID", nullptr));
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
        labelHotelName->setText(QCoreApplication::translate("MainWindow", "Hotel:", nullptr));
        labelHotelTo->setText(QCoreApplication::translate("MainWindow", "To", nullptr));
        labelHotelFrom->setText(QCoreApplication::translate("MainWindow", "From", nullptr));
        labelHotelTown->setText(QCoreApplication::translate("MainWindow", "Town:", nullptr));
        labelCarCompany->setText(QCoreApplication::translate("MainWindow", "Company", nullptr));
        labelCarPickupLocation->setText(QCoreApplication::translate("MainWindow", "Pickup Location", nullptr));
        labelCarReturnLocation->setText(QCoreApplication::translate("MainWindow", "Return Location", nullptr));
        labelCarFrom->setText(QCoreApplication::translate("MainWindow", "From", nullptr));
        labelCarTo->setText(QCoreApplication::translate("MainWindow", "To", nullptr));
        pushButtonSearchCustomer->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        labelName->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetTravels->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Travel-Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetTravels->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Start date", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetTravels->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "End date", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetBookings->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetBookings->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetBookings->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "End", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetBookings->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Travel-Id:", nullptr));
        menua->setTitle(QCoreApplication::translate("MainWindow", "Test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
