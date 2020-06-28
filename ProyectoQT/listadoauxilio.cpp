#include "listadoauxilio.h"
#include "ui_listadoauxilio.h"
#include "cuentadelusuario.h"
#include "informereporte.h"
#include <QTextStream>
#include <QFile>
#include <QDebug>


listadoAuxilio::listadoAuxilio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listadoAuxilio)
{
    ui->setupUi(this);

}

listadoAuxilio::~listadoAuxilio()
{
    delete ui;
}

void listadoAuxilio::on_pushButton_2_clicked()//boton para volver al menu
{
    close();
    cuentaDelUsuario cuenta5;
    cuenta5.setModal(true);
    cuenta5.exec();
}

void listadoAuxilio::on_pushButton_3_clicked()//boton para volver a informe y reporte
{
    close();
    informeReporte info3;
    info3.setModal(true);
    info3.exec();
}

