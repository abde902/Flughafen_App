
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QListWidgetItem>
#include <QMainWindow>
#include "globals.h"
#include "travelagency.h"
#include "rentalcarreservation.h"
#include "json.h"
#include "hotelbooking.h"
#include "flightbooking.h"
#include "booking.h"
#include "customer.h"
#include "travel.h"
#include <vector>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Travelagency* agency = new Travelagency;

private slots:
    void on_buttonOpenFile_clicked();
    void on_pushButtonSearchCustomer_clicked();

    void on_tableWidgetTravels_cellActivated(int row, int column);

    void on_tableWidget_cellActivated(int row, int column);

    void on_tableWidgetBookings_cellActivated(int row, int column);

private:
    Ui::MainWindow *ui;
    Customer* currentCustomer;
    Travel* currentTravel;
    Booking* currentBooking;
};

#endif // MAINWINDOW_H
