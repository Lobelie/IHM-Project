#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void addMode(QString s);
    
private slots:
    void on_addMode_clicked();

    void on_detailMode_clicked();

    void on_deleteMode_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
