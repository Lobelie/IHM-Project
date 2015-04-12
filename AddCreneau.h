#ifndef ADDCRENEAU_H
#define ADDCRENEAU_H

#include <QDialog>

class DetailsAppareilMode;

namespace Ui {
class AddCreneau;
}

class AddCreneau : public QDialog
{
    Q_OBJECT

public:
    explicit AddCreneau(DetailsAppareilMode *w, QWidget *parent = 0);
    ~AddCreneau();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::AddCreneau *ui;
    DetailsAppareilMode *detailsAppareilModeWindow;
};

#endif // ADDCRENEAU_H
