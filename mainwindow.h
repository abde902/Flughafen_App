
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

    void on_listWidgetBookings_itemActivated(QListWidgetItem *item);

    void on_listWidgetBookings_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
