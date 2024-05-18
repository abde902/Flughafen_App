#include"QMessageBox"
#include"travelagencyui.h"
#include"ui_travelagency.h"
#include "QFileDialog"
#include "globals.h"
#include "travelagency.h"
#include "rentalcarreservation.h"
#include "hotelbooking.h"
#include "flightbooking.h"
#include "booking.h"
#include <typeinfo>
#include"qinputdialog.h"
#include <QInputDialog>


TravelagencyUI::TravelagencyUI(Travelagency* travelAgency, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::TravelagencyUI), travelAgency(travelAgency)
{
    ui->setupUi(this);
    // Initialisierung der Benutzeroberfläche
}

TravelagencyUI::~TravelagencyUI()
{
    delete ui;
}

void TravelagencyUI::saveChanges()
{

}

void TravelagencyUI::on_buttonOpenFile_clicked()
{

}

void TravelagencyUI::on_einzelnclicked()
{

}

void TravelagencyUI::displayReisenByKundenId(Customer* customer)
{

}
