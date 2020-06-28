#ifndef NUEVOUSUARIO_H
#define NUEVOUSUARIO_H
#include <QVector>
#include <QDialog>
#include "modulo.h"
#include <list>
#include <QTCore>

namespace Ui {
class NuevoUsuario;
}

class NuevoUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit NuevoUsuario(QWidget *parent = 0);
    ~NuevoUsuario();

private slots:

    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

private:
    Ui::NuevoUsuario *ui;
protected:
    QString fecha;
    QString sexo;
    QString nombreApellido;
    int nCedula;
    QString estadoCivil;
    QString direc;
    QString nUsuario;
    QString nContrasena;
    QString rContrasena;
    int tCredito;
    int iMensual;
    int iMensualFamiliar;
    QString nombreEmpresa;
    int telEmpresa;
    int tiempoLaborando;
    int gastosTotales;
    QString cosito;
    int cel;
    QString correo;

};

#endif // NUEVOUSUARIO_H
