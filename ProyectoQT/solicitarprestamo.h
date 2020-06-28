#ifndef SOLICITARPRESTAMO_H
#define SOLICITARPRESTAMO_H

#include <QDialog>

namespace Ui {
class solicitarPrestamo;
}

class solicitarPrestamo : public QDialog
{
    Q_OBJECT

public:
    explicit solicitarPrestamo(QWidget *parent = 0);
    ~solicitarPrestamo();

private slots:
    void on_toolButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::solicitarPrestamo *ui;
protected:

    int valorPrestar;
    int mesesFTU;
    QString plazoCredito;
    QString descripcion;
    QString cosito2;
};

#endif // SOLICITARPRESTAMO_H
