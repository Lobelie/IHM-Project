#include "AddCreneau.h"
#include "ui_AddCreneau.h"
#include "DetailsAppareilMode.h"

AddCreneau::AddCreneau(DetailsAppareilMode *w, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCreneau),
    detailsAppareilModeWindow(w)
{
    ui->setupUi(this);
}

AddCreneau::~AddCreneau()
{
    delete ui;
}

void AddCreneau::on_buttonBox_accepted()
{
    this->detailsAppareilModeWindow->addCreneau(this->ui->timeEdit->text(), this->ui->timeEdit_2->text(), this->ui->spinBox->text());
    this->close();
}

void AddCreneau::on_buttonBox_rejected()
{
    this->close();
}
