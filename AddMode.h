#ifndef ADDMODE_H
#define ADDMODE_H

#include <QDialog>

namespace Ui {
class AddMode;
}

class AddMode : public QDialog
{
    Q_OBJECT

public:
    explicit AddMode(QWidget *parent = 0);
    ~AddMode();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::AddMode *ui;
};

#endif // ADDMODE_H
