#include "listadocredito.h"
#include "ui_listadocredito.h"
#include "cuentadelusuario.h"
#include "informereporte.h"
listadoCredito::listadoCredito(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listadoCredito)
{
    ui->setupUi(this);
}

listadoCredito::~listadoCredito()
{
    delete ui;
}

void listadoCredito::on_pushButton_3_clicked()//boton que vuelve al menu
{
    close();
    cuentaDelUsuario cuenta6;
    cuenta6.setModal(true);
    cuenta6.exec();
}

void listadoCredito::on_pushButton_2_clicked()//boton para volver a informe y reporte
{
    this->hide();
    informeReporte info5;
    info5.setModal(true);
    info5.exec();
}
