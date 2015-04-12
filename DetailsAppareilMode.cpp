#include "DetailsAppareilMode.h"
#include "ui_DetailsAppareilMode.h"
#include "AddCreneau.h"
#include "ModifierCreneau.h"

DetailsAppareilMode::DetailsAppareilMode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DetailsAppareilMode)
{
    ui->setupUi(this);
}

DetailsAppareilMode::~DetailsAppareilMode()
{
    delete ui;
}

void DetailsAppareilMode::addCreneau(QString d, QString f, QString t) {
    QStringList l;
    l.append(d);
    l.append(f);
    l.append(t);
    this->ui->treeWidget->addTopLevelItem(new QTreeWidgetItem(l));
}

void DetailsAppareilMode::on_pushButton_2_clicked()
{
    AddCreneau creneau(this);
    creneau.setModal(true);
    creneau.exec();
}

void DetailsAppareilMode::on_pushButton_3_clicked()
{
    ModifierCreneau creneau;
    creneau.setModal(true);
    creneau.exec();
}

void DetailsAppareilMode::on_pushButton_clicked()
{
    QList<QTreeWidgetItem*> l = this->ui->treeWidget->selectedItems();
    for(int i = 0; i < l.size(); i++) {
        delete l.at(i);
    }
}

void DetailsAppareilMode::on_checkBox_2_stateChanged(int arg1)
{
    this->ui->radioButton->setChecked(arg1);
    this->ui->radioButton_2->setChecked(arg1);
    this->ui->radioButton_3->setChecked(arg1);
    this->ui->radioButton_4->setChecked(arg1);
    this->ui->radioButton_5->setChecked(arg1);
    this->ui->radioButton_6->setChecked(arg1);
    this->ui->radioButton_7->setChecked(arg1);
}
