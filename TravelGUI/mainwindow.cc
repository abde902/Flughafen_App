
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
#include <QMessageBox>
#include <typeinfo>
#include "customer.h"
#include "travel.h"


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

    ui->lineEditCarCompany->setReadOnly(true);
    ui->lineEditCarPickupLocation->setReadOnly(true);
    ui->lineEditCarReturnLocation->setReadOnly(true);
    ui->dateEditCarFrom->setReadOnly(true);
    ui->dateEditCarTo->setReadOnly(true);

    ui->lineEditAirline->setEnabled(false);
    ui->lineEditFromDestination->setEnabled(false);
    ui->lineEditToDestination->setEnabled(false);
    ui->dateEditFlightArrival->setEnabled(false);
    ui->dateEditFlightDeparture->setEnabled(false);

    ui->lineEditHotelName->setEnabled(false);
    ui->lineEditHotelTown->setEnabled(false);
    ui->dateEditHotelFrom->setEnabled(false);
    ui->dateEditHotelTo->setEnabled(false);

    ui->lineEditCarCompany->setEnabled(false);
    ui->lineEditCarPickupLocation->setEnabled(false);
    ui->lineEditCarReturnLocation->setEnabled(false);
    ui->dateEditCarFrom->setEnabled(false);
    ui->dateEditCarTo->setEnabled(false);

    ui->tableWidgetTravels->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidgetBookings->setEditTriggers(QAbstractItemView::NoEditTriggers);

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
    agency->readFile(temp);
}
/*

void MainWindow::on_listWidgetBookings_itemActivated(QListWidgetItem *item)
{
    ui->lineEditPrice->setText(QString::number(agency->getBookingAtIndex(index)->getPrice()));
    ui->lineEditId->setText(QString::fromStdString(agency->getBookingAtIndex(index)->getId()));

    ui->lineEditAirline->setEnabled(false);
    ui->lineEditFromDestination->setEnabled(false);
    ui->lineEditToDestination->setEnabled(false);
    ui->dateEditFlightArrival->setEnabled(false);
    ui->dateEditFlightDeparture->setEnabled(false);

    ui->lineEditHotelName->setEnabled(false);
    ui->lineEditHotelTown->setEnabled(false);
    ui->dateEditHotelFrom->setEnabled(false);
    ui->dateEditHotelTo->setEnabled(false);

    ui->lineEditCarCompany->setEnabled(false);
    ui->lineEditCarPickupLocation->setEnabled(false);
    ui->lineEditCarReturnLocation->setEnabled(false);
    ui->dateEditCarFrom->setEnabled(false);
    ui->dateEditCarTo->setEnabled(false);

    if (FlightBooking* flightBooking = dynamic_cast<FlightBooking*>(agency->getBookingAtIndex(index)))
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
    }

    else if(HotelBooking* hotelBooking = dynamic_cast<HotelBooking*>(agency->getBookingAtIndex(index)))
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
        QDate dateTo = QDate::fromString(toDateString, "yyyyMMdd");
        ui->dateEditHotelTo->setDate(dateTo);
    }

    else if(RentalCarReservation* carReservation = dynamic_cast<RentalCarReservation*>(agency->getBookingAtIndex(index)))
    {
        ui->lineEditCarCompany->setEnabled(true);
        ui->lineEditCarPickupLocation->setEnabled(true);
        ui->lineEditCarReturnLocation->setEnabled(true);
        ui->dateEditCarFrom->setEnabled(true);
        ui->dateEditCarTo->setEnabled(true);

        ui->lineEditCarCompany->setText(QString::fromStdString(carReservation->getCompany()));
        ui->lineEditCarPickupLocation->setText(QString::fromStdString(carReservation->getPickupLocation()));
        ui->lineEditCarReturnLocation->setText(QString::fromStdString(carReservation->getReturnLocation()));

        QString fromDateString = QString::fromStdString(carReservation->getFromDate());
        QDate dateFrom = QDate::fromString(fromDateString, "yyyyMMdd");
        ui->dateEditCarFrom->setDate(dateFrom);

        QString toDateString = QString::fromStdString(carReservation->getToDate());
        QDate dateTo = QDate::fromString(toDateString, "yyyyMMdd");
        ui->dateEditCarFrom->setDate(dateTo);
    }
}


void MainWindow::on_listWidgetBookings_itemClicked(QListWidgetItem *item)
{

}
*/


void MainWindow::on_pushButtonSearchCustomer_clicked()
{
    currentCustomer = agency->findCustomer(ui->spinBoxCustomerId->value());
    if (currentCustomer)
    {
        ui->tableWidgetTravels->clear();
        ui->lineEditName->setText(QString::fromStdString(currentCustomer->getName()));
        ui->tableWidgetTravels->clearContents();
        while (ui->tableWidgetTravels->rowCount() > 0) {
            ui->tableWidgetTravels->removeRow(0);
        }
        for(auto travel : currentCustomer->getTravelList())
        {
            int row = ui->tableWidgetTravels->rowCount();
            ui->tableWidgetTravels->insertRow(row);

            QTableWidgetItem* idItem = new QTableWidgetItem(QString::number(travel->getId()));
            QTableWidgetItem* startDateItem = new QTableWidgetItem(QString::fromStdString(travel->getStartDate()));
            QTableWidgetItem* endDateItem = new QTableWidgetItem(QString::fromStdString(travel->getEndDate()));

            ui->tableWidgetTravels->setItem(row, 0, idItem);
            ui->tableWidgetTravels->setItem(row, 1, startDateItem);
            ui->tableWidgetTravels->setItem(row, 2, endDateItem);
        }

    }
}


void MainWindow::on_tableWidgetTravels_cellActivated(int row, int column)
{
    QTableWidgetItem* idItem = ui->tableWidgetTravels->item(row, 0);
    if (idItem) {
        bool conversionWorked;
        long id = idItem->data(Qt::DisplayRole).toLongLong(&conversionWorked);

        if (conversionWorked) {
            currentTravel = agency->findTravel(id);
            if (currentTravel) {
                ui->lineEditTravelId->setText(QString::number(id));
                ui->tableWidgetBookings->clear();
                ui->tableWidgetBookings->clearContents();
                while(ui->tableWidgetBookings->rowCount() > 0) {
                    ui->tableWidgetBookings->removeRow(0);
                }
                for (auto booking : currentTravel->getBookingList()) {
                    int row = ui->tableWidgetBookings->rowCount();
                    ui->tableWidgetBookings->insertRow(row);

                    QTableWidgetItem* typeItem = new QTableWidgetItem(QString::fromStdString(booking->getSymbol()));
                    QTableWidgetItem* startDateItem = new QTableWidgetItem(QString::fromStdString(booking->getFromDate()));
                    QTableWidgetItem* endDateItem = new QTableWidgetItem(QString::fromStdString(booking->getToDate()));
                    QTableWidgetItem* priceItem = new QTableWidgetItem(QString::number(booking->getPrice()));

                    ui->tableWidgetBookings->setItem(row, 0, typeItem);
                    ui->tableWidgetBookings->setItem(row, 1, endDateItem);

                  ui->tableWidgetBookings->setItem(row, 2, startDateItem);
                    ui->tableWidgetBookings->setItem(row, 3, priceItem);
                }
        }
    }}
}


void MainWindow::on_tableWidget_cellActivated(int row, int column)
{

}

void MainWindow::on_tableWidgetBookings_cellActivated(int row, int column)
{
    currentBooking = currentTravel->getBookingList()[row];

            ui->lineEditPrice->setText(QString::number(currentBooking->getPrice()));
            ui->lineEditId->setText(QString::fromStdString(currentBooking->getId()));
            ui->lineEditAirline->setEnabled(false);
            ui->lineEditFromDestination->setEnabled(false);
            ui->lineEditToDestination->setEnabled(false);
            ui->dateEditFlightArrival->setEnabled(false);
            ui->dateEditFlightDeparture->setEnabled(false);

            ui->lineEditHotelName->setEnabled(false);
            ui->lineEditHotelTown->setEnabled(false);
            ui->dateEditHotelFrom->setEnabled(false);
            ui->dateEditHotelTo->setEnabled(false);

            ui->lineEditCarCompany->setEnabled(false);
            ui->lineEditCarPickupLocation->setEnabled(false);
            ui->lineEditCarReturnLocation->setEnabled(false);
            ui->dateEditCarFrom->setEnabled(false);
            ui->dateEditCarTo->setEnabled(false);

            if (FlightBooking* flightBooking = dynamic_cast<FlightBooking*>(currentBooking))
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
            }

            else if(HotelBooking* hotelBooking = dynamic_cast<HotelBooking*>(currentBooking))
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
                QDate dateTo = QDate::fromString(toDateString, "yyyyMMdd");
                ui->dateEditHotelTo->setDate(dateTo);
            }

            else if(RentalCarReservation* carReservation = dynamic_cast<RentalCarReservation*>(currentBooking))
            {
                ui->lineEditCarCompany->setEnabled(true);
                ui->lineEditCarPickupLocation->setEnabled(true);
                ui->lineEditCarReturnLocation->setEnabled(true);
                ui->dateEditCarFrom->setEnabled(true);
                ui->dateEditCarTo->setEnabled(true);

                ui->lineEditCarCompany->setText(QString::fromStdString(carReservation->getCompany()));
                ui->lineEditCarPickupLocation->setText(QString::fromStdString(carReservation->getPickupLocation()));
                ui->lineEditCarReturnLocation->setText(QString::fromStdString(carReservation->getReturnLocation()));

                QString fromDateString = QString::fromStdString(carReservation->getFromDate());
                QDate dateFrom = QDate::fromString(fromDateString, "yyyyMMdd");
                ui->dateEditCarFrom->setDate(dateFrom);

                QString toDateString = QString::fromStdString(carReservation->getToDate());
                QDate dateTo = QDate::fromString(toDateString, "yyyyMMdd");
                ui->dateEditCarFrom->setDate(dateTo);
            }
        }
