#ifndef ADDMODEVACANCES_H
#define ADDMODEVACANCES_H

#include <QDialog>

namespace Ui {
class AddModeVacances;
}

class AddModeVacances : public QDialog
{
    Q_OBJECT

public:
    explicit AddModeVacances(QWidget *parent = 0);
    ~AddModeVacances();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::AddModeVacances *ui;
};

#endif // ADDMODEVACANCES_H
