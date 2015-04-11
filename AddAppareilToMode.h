#ifndef ADDAPPAREILTOMODE_H
#define ADDAPPAREILTOMODE_H

#include <QDialog>

class AddMode;

namespace Ui {
class AddAppareilToMode;
}

class AddAppareilToMode : public QDialog
{
    Q_OBJECT

public:
    explicit AddAppareilToMode(AddMode *w, QWidget *parent = 0);
    ~AddAppareilToMode();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::AddAppareilToMode *ui;
    AddMode *addModeWindow;
};

#endif // ADDAPPAREILTOMODE_H
