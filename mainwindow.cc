
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "globals.h"
#include "travelagency.h"
#include "rentalcarreservation.h"
#include "json.h"
#include "hotelbooking.h"
#include "flightbooking.h"
#include "booking.h"
#include <typeinfo>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditAirline->setReadOnly(true);
    ui->lineEditFromDestination->setReadOnly(true);
    ui->lineEditId->setReadOnly(true);
    ui->lineEditPrice->setReadOnly(true);
    ui->lineEditToDestination->setReadOnly(true);
    ui->dateEditFlightArrival->setReadOnly(true);
    ui->dateEditFlightDeparture->setReadOnly(true);

    ui->lineEditHotelName->setReadOnly(true);
    ui->lineEditHotelTown->setReadOnly(true);
    ui->dateEditHotelFrom->setReadOnly(true);
    ui->dateEditHotelTo->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_buttonOpenFile_clicked()
{
    QFileDialog fileDialog(this);
    fileDialog.setFileMode(QFileDialog::ExistingFile);
    fileDialog.setNameFilter(tr("Json (*.json)"));
    QStringList fileNames;
    if(fileDialog.exec())
        fileNames = fileDialog.selectedFiles();
    std::string temp = fileNames[0].toStdString();
    /*
    for (size_t i; i < temp.length(); i++)
    {
        if(temp[i] == '/')
            temp[i] = '\\';
    }*/
    globals::fileName = temp;
    agency->readFile(globals::fileName);
    globals::bookingStrings.clear();
    ui->listWidgetBookings->clear();
    for (Booking* booking : agency->bookings)
    {
        globals::bookingStrings.append(QString::fromStdString(booking->showDetails()));
    }
    ui->listWidgetBookings->addItems(globals::bookingStrings);
}


void MainWindow::on_listWidgetBookings_itemActivated(QListWidgetItem *item)
{
    int index = ui->listWidgetBookings->row(item);
    ui->lineEditPrice->setText(QString::number(agency->bookings[index]->getPrice()));
    ui->lineEditId->setText(QString::fromStdString(agency->bookings[index]->getId()));

    ui->lineEditAirline->setEnabled(false);
    ui->lineEditFromDestination->setEnabled(false);
    ui->lineEditToDestination->setEnabled(false);
    ui->dateEditFlightArrival->setEnabled(false);
    ui->dateEditFlightDeparture->setEnabled(false);

    ui->lineEditHotelName->setEnabled(false);
    ui->lineEditHotelTown->setEnabled(false);
    ui->dateEditHotelFrom->setEnabled(false);
    ui->dateEditHotelTo->setEnabled(false);

    if (FlightBooking* flightBooking = dynamic_cast<FlightBooking*>(agency->bookings[index]))
    {
        ui->lineEditAirline->setEnabled(true);
        ui->lineEditFromDestination->setEnabled(true);
        ui->lineEditToDestination->setEnabled(true);
        ui->dateEditFlightArrival->setEnabled(true);
        ui->dateEditFlightDeparture->setEnabled(true);

        ui->lineEditAirline->setText(QString::fromStdString(flightBooking->getAirline()));
        ui->lineEditFromDestination->setText(QString::fromStdString(flightBooking->getFromDestination()));
        ui->lineEditToDestination->setText(QString::fromStdString(flightBooking->getToDestination()));

        QString arrivalDateString = QString::fromStdString(flightBooking->getFromDate());
        QDate dateArrival = QDate::fromString(arrivalDateString, "yyyyMMdd");
        ui->dateEditFlightArrival->setDate(dateArrival);

        QString departureDateString = QString::fromStdString(flightBooking->getToDate());
        QDate dateDeparture = QDate::fromString(departureDateString, "yyyyMMdd");
        ui->dateEditFlightDeparture->setDate(dateDeparture);

        //delete flightBooking;
    }

    else if(HotelBooking* hotelBooking = dynamic_cast<HotelBooking*>(agency->bookings[index]))
    {
        ui->lineEditHotelName->setEnabled(true);
        ui->lineEditHotelTown->setEnabled(true);
        ui->dateEditHotelFrom->setEnabled(true);
        ui->dateEditHotelTo->setEnabled(true);

        ui->lineEditHotelName->setText(QString::fromStdString(hotelBooking->getHotel()));
        ui->lineEditHotelTown->setText(QString::fromStdString(hotelBooking->getTown()));

        QString fromDateString = QString::fromStdString(hotelBooking->getFromDate());
        QDate dateFrom = QDate::fromString(fromDateString, "yyyyMMdd");
        ui->dateEditHotelFrom->setDate(dateFrom);

        QString toDateString = QString::fromStdString(hotelBooking->getToDate());
        QDate toDeparture = QDate::fromString(toDateString, "yyyyMMdd");
        ui->dateEditHotelTo->setDate(toDeparture);
    }

    else if(RentalCarReservation* carReservation = dynamic_cast<RentalCarReservation*>(agency->bookings[index]))
    {

    }
}


void MainWindow::on_listWidgetBookings_itemClicked(QListWidgetItem *item)
{

}

