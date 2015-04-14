#include "wifi.h"
#include "ui_wifi.h"


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "AddMode.h"
#include "AddModeVacances.h"
#include "NewAppareil.h"
#include "addthermo.h"
#include "wifi.h"


wifi::wifi(MainWindow *w, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wifi),
    mainWindow(w)
{
    ui->setupUi(this);
}

wifi::~wifi()
{
    delete ui;
}

void wifi::on_WifiButton_clicked()
{
    NewAppareil newApp(this->mainWindow);
    newApp.init(QString("Chauffage Bureau"));
    newApp.setModal(true);
    newApp.exec();
    this->close();
}

void wifi::on_Cancel_clicked()
{
    this->close();
}
