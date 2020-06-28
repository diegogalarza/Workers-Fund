#include "modulo.h"
#include "ui_modulo.h"
#include <iostream>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <inicio.h>
#include "empleadointro.h"

Modulo::Modulo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Modulo)
{
    ui->setupUi(this);
}

Modulo::~Modulo()
{
    delete ui;
}

void Modulo::on_pushButton_clicked()//boton para abrir la sesion
{
    if(ui->comboBox->currentText()=="Empleado")
    {
        close();
        empleadoIntro ei2;
        ei2.setModal(true);
        ei2.exec();
    }
    else if(ui->comboBox->currentText()=="Asociado")
    {
        close();
        inicio ini1;
        ini1.setModal(true);
        ini1.exec();
    }
}




