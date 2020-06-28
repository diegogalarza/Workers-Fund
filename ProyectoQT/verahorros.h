#ifndef VERAHORROS_H
#define VERAHORROS_H

#include <QDialog>

namespace Ui {
class verahorros;
}

class verahorros : public QDialog
{
    Q_OBJECT

public:
    explicit verahorros(QWidget *parent = 0);
    ~verahorros();

private slots:
    void on_pushButton_clicked();
    QStringList leerAsociados();


    void on_pushButton_2_clicked();

private:
    Ui::verahorros *ui;
};

#endif // VERAHORROS_H
