#ifndef INGRESOAHORRO_H
#define INGRESOAHORRO_H

#include <QDialog>

namespace Ui {
class ingresoAhorro;
}

class ingresoAhorro : public QDialog
{
    Q_OBJECT

public:
    explicit ingresoAhorro(QWidget *parent = 0);
    ~ingresoAhorro();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    QStringList verifica();



private:
    Ui::ingresoAhorro *ui;

protected:
    QString aMensual;
    QString nCuenta;
    int ahorro;
    QString cosito4;
};

#endif // INGRESOAHORRO_H
