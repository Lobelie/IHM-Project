#ifndef NEWAPPAREIL_H
#define NEWAPPAREIL_H

#include <QDialog>

namespace Ui {
class NewAppareil;
}

class MainWindow;
class NewAppareil : public QDialog
{
    Q_OBJECT

public:
    NewAppareil(MainWindow *w, QWidget *parent = 0);
    ~NewAppareil();
    void init(QString s);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::NewAppareil *ui;
    MainWindow *mainWindow;
};

#endif // NEWAPPAREIL_H
