#include "addthermo.h"
#include "ui_addthermo.h"
#include "mainwindow.h"

AddThermo::AddThermo(MainWindow *w, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddThermo),
    mainWindow(w)
{
    ui->setupUi(this);
    this->ui->timeEdit_2->setEnabled(false);
    this->ui->timeEdit->setEnabled(false);
    this->ui->spinBox->setEnabled(false);
}

AddThermo::~AddThermo()
{
    delete ui;
}

void AddThermo::on_appareilListWidget_clicked(const QModelIndex &index)
{
    this->ui->timeEdit_2->setEnabled(true);
    this->ui->timeEdit->setEnabled(true);
    this->ui->spinBox->setEnabled(true);


}

void AddThermo::on_ajoutTherm_accepted()
{

}
