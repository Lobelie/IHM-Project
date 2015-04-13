#ifndef ADDTHERMO_H
#define ADDTHERMO_H

#include <QDialog>

class MainWindow;

namespace Ui {
class AddThermo;
}

class AddThermo : public QDialog
{
    Q_OBJECT

public:
    explicit AddThermo(MainWindow *w, QWidget *parent = 0);
    ~AddThermo();

private slots:
    void on_appareilListWidget_clicked(const QModelIndex &index);

    void on_ajoutTherm_accepted();

private:
    Ui::AddThermo *ui;
    MainWindow *mainWindow;
};

#endif // ADDTHERMO_H
