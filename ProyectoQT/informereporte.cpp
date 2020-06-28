#include "informereporte.h"
#include "ui_informereporte.h"
#include "cuentadelusuario.h"
#include "listadoahorro.h"
#include "listadoauxilio.h"
#include "listadocredito.h"

informeReporte::informeReporte(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::informeReporte)
{
    ui->setupUi(this);
}

informeReporte::~informeReporte()
{
    delete ui;
}

void informeReporte::on_pushButton_4_clicked()//boton que regresa al menu
{
    close();
    cuentaDelUsuario cuenta3;
    cuenta3.setModal(true);
    cuenta3.exec();
}

void informeReporte::on_pushButton_3_clicked()//boton que genera el listado de ahorro
{
    close();
    ListadoAhorro listAhorro;
    listAhorro.setModal(true);
    listAhorro.exec();
}

void informeReporte::on_pushButton_2_clicked()//boton que genera el listado de auxilios
{
   close();
   listadoAuxilio listAux;
   listAux.setModal(true);
   listAux.exec();
}

void informeReporte::on_pushButton_clicked()//boton que genera el listado de creditos
{
    close();
    listadoCredito listCredit;
    listCredit.setModal(true);
    listCredit.exec();
}
