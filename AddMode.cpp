#include "AddMode.h"
#include "ui_AddMode.h"

AddMode::AddMode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddMode)
{
    ui->setupUi(this);
}

AddMode::~AddMode()
{
    delete ui;
}

void AddMode::on_buttonBox_accepted()
{
    this->close();
}

void AddMode::on_buttonBox_rejected()
{
    this->close();
}
