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
