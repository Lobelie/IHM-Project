#include "AddModeVacances.h"
#include "ui_AddModeVacances.h"

AddModeVacances::AddModeVacances(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddModeVacances)
{
    ui->setupUi(this);
}

AddModeVacances::~AddModeVacances()
{
    delete ui;
}

void AddModeVacances::on_buttonBox_accepted()
{
    this->close();
}

void AddModeVacances::on_buttonBox_rejected()
{
    this->close();
}
