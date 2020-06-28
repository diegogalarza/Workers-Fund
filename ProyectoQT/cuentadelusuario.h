#ifndef CUENTADELUSUARIO_H
#define CUENTADELUSUARIO_H

#include <QDialog>

namespace Ui {
class cuentaDelUsuario;
}

class cuentaDelUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit cuentaDelUsuario(QWidget *parent = 0);
    ~cuentaDelUsuario();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::cuentaDelUsuario *ui;
};

#endif // CUENTADELUSUARIO_H
