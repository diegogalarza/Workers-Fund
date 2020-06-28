#include "solicitarprestamo.h"
#include "ui_solicitarprestamo.h"
#include "QMessageBox"
#include "cuentadelusuario.h"
#include <iostream>
#include <QIntValidator>
#include <QRegExp>
#include <QRegExpValidator>
#include <QTextStream>
#include <QFile>

solicitarPrestamo::solicitarPrestamo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::solicitarPrestamo)
{
    ui->setupUi(this);

    QIntValidator *roll6 = new QIntValidator(1,1000000000);
    ui->lineEdit_8->setValidator(roll6);
    QIntValidator *roll7 = new QIntValidator(1,1000000000);
    ui->lineEdit_9->setValidator(roll7);
}

solicitarPrestamo::~solicitarPrestamo()
{
    delete ui;
}

void solicitarPrestamo::on_toolButton_clicked()//informacion sobre el ingreso del plazo del credito
{
    QMessageBox::information(this,"Informacion","Plazo en cantidad de meses");//terminar el boton

}
void solicitarPrestamo::on_pushButton_clicked()//boton para hacer solicitud luego de que se hayan llenado los datos
{
    plazoCredito=ui->comboBox->currentText()+"|";
    descripcion =ui->comboBox_2->currentText();
    cosito2="|";
    if(ui->lineEdit_8->text()!=""&&ui->lineEdit_9->text()!="")
    {

        valorPrestar=ui->lineEdit_8->text().toInt();
        mesesFTU=ui->lineEdit_9->text().toInt();
        QMessageBox::information(this,"Informacion","Su solicitud esta siendo procesada.");

        QString filename = "/Users/juanpablorey/Desktop/Proyecto/creditos.txt";
        QFile file(filename);
        file.open(QIODevice::ReadOnly);
        QString guarda2=file.readAll();
        file.close();


        file.open(QIODevice::WriteOnly | QIODevice::Text);
        QString holee;
        QTextStream stream(&holee);
        stream << guarda2;
        stream << valorPrestar;
        stream << cosito2;
        stream << plazoCredito;
        stream << mesesFTU;
        stream << cosito2;
        stream << descripcion;
        stream << "\n";


        QTextStream outputToFile(&file);
        outputToFile << holee;
        file.close();

        ui->lineEdit_8->clear();
        ui->lineEdit_9->clear();
     }

}

void solicitarPrestamo::on_pushButton_3_clicked()
{
    close();
    cuentaDelUsuario cuentaa;
    cuentaa.setModal(true);
    cuentaa.exec();
}
