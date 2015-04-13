#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "AddMode.h"
#include "AddModeVacances.h"
#include "NewAppareil.h"
#include "addthermo.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addMode(QString s) {
    QStringList l;
    l.append(s);
    this->ui->modeTreeWidget->addTopLevelItem(new QTreeWidgetItem(l));
}

void MainWindow::addAppareil(QString s) {
    QStringList l;
    l.append(s);
    this->ui->appareilListWidget->addTopLevelItem(new QTreeWidgetItem(l));
}

void MainWindow::on_addMode_clicked()
{
    AddMode addmode(this);
    addmode.setModal(true);
    addmode.exec();
}

void MainWindow::on_detailMode_clicked()
{
    AddModeVacances addmode;
    addmode.setModal(true);
    addmode.exec();
}

void MainWindow::on_deleteMode_clicked()
{
    QList<QTreeWidgetItem*> l = this->ui->modeTreeWidget->selectedItems();
    for(int i = 0; i < l.size(); i++) {
        delete l.at(i);
    }
}

void MainWindow::on_addAppareil_clicked()
{
    NewAppareil newApp(this);
    newApp.init(QString(""));
    newApp.setModal(true);
    newApp.exec();
}

void MainWindow::on_suppAppareil_clicked()
{
    QList<QTreeWidgetItem*> l = this->ui->appareilListWidget->selectedItems();
    for(int i = 0; i < l.size(); i++) {
        delete l.at(i);
    }
}

void MainWindow::on_detailAppareil_clicked()
{
    NewAppareil newApp(this);
    newApp.init(QString(this->ui->appareilListWidget->selectedItems().first()->text(0)));
    newApp.setModal(true);
    newApp.exec();
}

void MainWindow::on_boutonJeudi_clicked()
{
    AddThermo therm(this);
    therm.setModal(true);
    therm.exec();
    this->ui->thermoJeudi->setAutoFillBackground(true);
    this->ui->thermoJeudi->setText("Chauffage Salon thermo 4");
    //this->ui->test->setAutoFillBackground(true);
}
