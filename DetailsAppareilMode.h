#ifndef DETAILSAPPAREILMODE_H
#define DETAILSAPPAREILMODE_H

#include <QDialog>

namespace Ui {
class DetailsAppareilMode;
}

class DetailsAppareilMode : public QDialog
{
    Q_OBJECT

public:
    explicit DetailsAppareilMode(QWidget *parent = 0);
    ~DetailsAppareilMode();
    void addCreneau(QString d, QString f, QString t);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_checkBox_2_stateChanged(int arg1);

private:
    Ui::DetailsAppareilMode *ui;
};

#endif // DETAILSAPPAREILMODE_H
