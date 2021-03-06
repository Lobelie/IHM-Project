#ifndef ADDMODE_H
#define ADDMODE_H

#include <QDialog>

class MainWindow;

namespace Ui {
class AddMode;
}

class AddMode : public QDialog
{
    Q_OBJECT

public:
    explicit AddMode(MainWindow *w, QWidget *parent = 0);
    ~AddMode();
    void addAppareil(QString name);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AddMode *ui;
    MainWindow *mainWindow;
};

#endif // ADDMODE_H
