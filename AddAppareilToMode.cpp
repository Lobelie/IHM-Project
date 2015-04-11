#include "AddAppareilToMode.h"
#include "ui_AddAppareilToMode.h"
#include "AddMode.h"

AddAppareilToMode::AddAppareilToMode(AddMode *w, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAppareilToMode),
    addModeWindow(w)
{
    ui->setupUi(this);
}

AddAppareilToMode::~AddAppareilToMode()
{
    delete ui;
}

void AddAppareilToMode::on_buttonBox_accepted()
{
    QList<QTreeWidgetItem*> l = this->ui->treeWidget->selectedItems();
    for(int i = 0; i < l.size(); i++) {
        this->addModeWindow->addAppareil(l.at(i)->text(0));
    }
    this->close();
}

void AddAppareilToMode::on_buttonBox_rejected()
{
    this->close();
}
