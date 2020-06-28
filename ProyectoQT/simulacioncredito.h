#ifndef SIMULACIONCREDITO_H
#define SIMULACIONCREDITO_H

#include <QDialog>

namespace Ui {
class SimulacionCredito;
}

class SimulacionCredito : public QDialog
{
    Q_OBJECT

public:
    explicit SimulacionCredito(QWidget *parent = 0);
    ~SimulacionCredito();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


    void on_toolButton_clicked();

private:
    Ui::SimulacionCredito *ui;
protected:
    int Imonto;
    int Iplazo;
    int relacion;
    QString relacion1;
    int sVida;
    int iva;
};

#endif // SIMULACIONCREDITO_H
