#include "AddMode.h"
#include "ui_AddMode.h"
#include "mainwindow.h"
#include "AddAppareilToMode.h"

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

void AddMode::addAppareil(QString name) {
    QStringList l;
    l.append(name);
    this->ui->treeWidget->addTopLevelItem(new QTreeWidgetItem(l));
}

void AddMode::on_buttonBox_accepted()
{
    this->mainWindow->addMode(this->ui->lineEdit->text());
    this->close();
}

void AddMode::on_buttonBox_rejected()
{
    this->close();
}

void AddMode::on_pushButton_clicked()
{
    AddAppareilToMode addAppareil(this);
    addAppareil.setModal(true);
    addAppareil.exec();
}

void AddMode::on_pushButton_3_clicked()
{
    QList<QTreeWidgetItem*> l = this->ui->treeWidget->selectedItems();
    for(int i = 0; i < l.size(); i++) {
        delete l.at(i);
    }
}
