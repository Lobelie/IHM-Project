#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "AddMode.h"
#include "AddModeVacances.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addMode(QString s) {
    QStringList l;
    l.append(s);
    this->ui->modeTreeWidget->addTopLevelItem(new QTreeWidgetItem(l));
}

void MainWindow::on_addMode_clicked()
{
    AddMode addmode(this);
    addmode.setModal(true);
    addmode.exec();
}

void MainWindow::on_detailMode_clicked()
{
    AddModeVacances addmode;
    addmode.setModal(true);
    addmode.exec();
}
