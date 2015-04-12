#ifndef MODIFIERCRENEAU_H
#define MODIFIERCRENEAU_H

#include <QDialog>

namespace Ui {
class ModifierCreneau;
}

class ModifierCreneau : public QDialog
{
    Q_OBJECT

public:
    explicit ModifierCreneau(QWidget *parent = 0);
    ~ModifierCreneau();

private:
    Ui::ModifierCreneau *ui;
};

#endif // MODIFIERCRENEAU_H
