#ifndef VERAUXILIOS_H
#define VERAUXILIOS_H

#include <QDialog>

namespace Ui {
class verAuxilios;
}

class verAuxilios : public QDialog
{
    Q_OBJECT

public:
    explicit verAuxilios(QWidget *parent = 0);
    ~verAuxilios();

private slots:
    void on_pushButton_clicked();
    QStringList leerAsociados();


    void on_pushButton_2_clicked();

private:
    Ui::verAuxilios *ui;
};

#endif // VERAUXILIOS_H
