#include "NewAppareil.h"
#include "ui_NewAppareil.h"

#include <QDialog>
#include "mainwindow.h"

NewAppareil::NewAppareil(MainWindow *w, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewAppareil),
    mainWindow(w)
{
    ui->setupUi(this);
}

NewAppareil::~NewAppareil()
{
    delete ui;
}

void NewAppareil::init(QString s) {
    ui->idAppareil->setText(s);
    ui->nomAppareil->setText(s);
    ui->securiteAppareil->setText(s);
}

void NewAppareil::on_buttonBox_accepted()
{
    this->mainWindow->addAppareil(this->ui->nomAppareil->text());
    this->close();
}

void NewAppareil::on_buttonBox_rejected()
{
    this->close();
}
