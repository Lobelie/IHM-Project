#include "ModifierCreneau.h"
#include "ui_ModifierCreneau.h"

ModifierCreneau::ModifierCreneau(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifierCreneau)
{
    ui->setupUi(this);
}

ModifierCreneau::~ModifierCreneau()
{
    delete ui;
}
