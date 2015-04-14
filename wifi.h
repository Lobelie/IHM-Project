#ifndef WIFI_H
#define WIFI_H

#include <QDialog>


namespace Ui {
class wifi;
}
class MainWindow;
class wifi : public QDialog
{
    Q_OBJECT

public:
    explicit wifi(MainWindow *w, QWidget *parent = 0);
    ~wifi();

private slots:
    void on_WifiButton_clicked();

    void on_Cancel_clicked();

private:
    Ui::wifi *ui;
        MainWindow *mainWindow;
};

#endif // WIFI_H
