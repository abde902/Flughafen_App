#ifndef TRAVELAGENCYUI_H
#define TRAVELAGENCYUI_H

#include <QListWidgetItem>
#include <QMainWindow>
#include "globals.h"
#include "travelagency.h"
#include "rentalcarreservation.h"
#include "json.h"
#include "hotelbooking.h"
#include "flightbooking.h"
#include "booking.h"
#include"ui_travelagency.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TravelagencyUI; }
QT_END_NAMESPACE

class TravelagencyUI : public QMainWindow
{
    Q_OBJECT

public:
    TravelagencyUI(Travelagency* travelAgency, QWidget *parent = nullptr);
    ~TravelagencyUI();

private slots:
    void saveChanges();
    void on_buttonOpenFile_clicked();
    void on_einzelnclicked();
    void displayReisenByKundenId(Customer* customer);

private:
    Ui::TravelagencyUI *ui;
    Travelagency* travelAgency;
};

#endif // TRAVELAGENCYUI_H

