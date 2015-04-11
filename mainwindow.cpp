#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "AddMode.h"

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

void MainWindow::on_addMode_clicked()
{
    AddMode addmode;
    addmode.setModal(true);
    addmode.exec();
}
