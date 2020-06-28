#include "cuentadelusuario.h"
#include "ui_cuentadelusuario.h"
#include "simulacioncredito.h"
#include "solicitarauxilio.h"
#include "solicitarprestamo.h"
#include "ingresoahorro.h"
#include "faq.h"
#include "informereporte.h"
#include "inicio.h"
cuentaDelUsuario::cuentaDelUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cuentaDelUsuario)
{
    ui->setupUi(this);
}

cuentaDelUsuario::~cuentaDelUsuario()
{
    delete ui;
}
void cuentaDelUsuario::on_pushButton_clicked()//boton para simulacion de credito
{
    close();
    SimulacionCredito simu;
    simu.setModal(true);
    simu.exec();
}

void cuentaDelUsuario::on_pushButton_2_clicked()//boton para solicitar auxilio
{
    close();
    solicitarAuxilio hi;
    hi.setModal(true);
    hi.exec();
}

void cuentaDelUsuario::on_pushButton_3_clicked()//boton para solicitar prestamo
{
    close();
    solicitarPrestamo pres;
    pres.setModal(true);
    pres.exec();
}

void cuentaDelUsuario::on_pushButton_5_clicked()//boton para ingresar ahorro
{
    close();
    ingresoAhorro ahorrito;
    ahorrito.setModal(true);
    ahorrito.exec();
}

void cuentaDelUsuario::on_pushButton_6_clicked()//boton para ir a preguntas frecuentes
{
    this->hide();
    FAQ pregunticas;
    pregunticas.setModal(true);
    pregunticas.exec();
}

void cuentaDelUsuario::on_pushButton_7_clicked()//boton para ir a informes y reportes
{
    close();
    informeReporte infor;
    infor.setModal(true);
    infor.exec();
}



void cuentaDelUsuario::on_pushButton_4_clicked()
{
    close();
    inicio m1;
    m1.setModal(true);
    m1.exec();

}
