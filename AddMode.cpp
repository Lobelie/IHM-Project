#include "AddMode.h"
#include "ui_AddMode.h"
#include "mainwindow.h"

AddMode::AddMode(MainWindow *w, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddMode),
    mainWindow(w)
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
    this->mainWindow->addMode(this->ui->lineEdit->text());
}

void AddMode::on_buttonBox_rejected()
{
    this->close();
}
