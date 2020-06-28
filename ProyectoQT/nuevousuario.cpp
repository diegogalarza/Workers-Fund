#include "nuevousuario.h"
#include "ui_nuevousuario.h"
#include <QMessageBox>
#include <cuentadelusuario.h>
#include <inicio.h>
#include <modulo.h>
#include <iostream>
#include <string>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QIntValidator>
#include <QRegExp>
#include <QRegExpValidator>
#include <fstream>      // std::fstream

NuevoUsuario::NuevoUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NuevoUsuario)
{
    ui->setupUi(this);
    ui->dateEdit->setDate(QDate::currentDate());
    QIntValidator *roll = new QIntValidator(1,1000000000);
    ui->lineEdit_4->setValidator(roll);
    QRegExp holi1("([A-Z][a-z]*)([\\s\\\'-][A-Z][a-z]*)*");
    QRegExpValidator *valor1 = new QRegExpValidator(holi1, this);
    ui->lineEdit->setValidator(valor1);
    QIntValidator *roll6 = new QIntValidator(1,1000000000);
    ui->lineEdit_2->setValidator(roll6);
    QIntValidator *roll1 = new QIntValidator(1,1000000000);
    ui->lineEdit_3->setValidator(roll1);
    QIntValidator *roll2 = new QIntValidator(1,1000000000);
    ui->lineEdit_9->setValidator(roll2);
    QIntValidator *roll3 = new QIntValidator(1,1000000000);
    ui->lineEdit_11->setValidator(roll3);
    QIntValidator *roll4 = new QIntValidator(1,1000000000);
    ui->lineEdit_12->setValidator(roll4);
    QIntValidator *roll5 = new QIntValidator(1,1000000000);
    ui->lineEdit_13->setValidator(roll5);
    QIntValidator *roll7 = new QIntValidator(1,1000000000);
    ui->lineEdit_14->setValidator(roll7);
    QRegExp holi("\\b[a-z0-9._]+@[a-z]+\\.[a-z]{2,4}\\b");
    QRegExpValidator *valor = new QRegExpValidator(holi, this);
    ui->lineEdit_15->setValidator(valor);


}

NuevoUsuario::~NuevoUsuario()
{
    delete ui;
}


void NuevoUsuario::on_pushButton_clicked()//boton para pasar a la cuenta del usuario recien creada
{
    nombreApellido=ui->lineEdit->text()+"|";//retorna el nombre y apellido
    fecha =ui->dateEdit->date().toString("dd/MM/yyyy")+"|";//retorna la fecha
    sexo=ui->comboBox->currentText()+"|";//retorna el sexo
    estadoCivil=ui->comboBox_2->currentText()+"|";//retorna el estado civil
    direc=ui->lineEdit_5->text()+"|";//retorna la direccion
    nUsuario=ui->lineEdit_6->text()+"|";//retorna el usuario nuevo
    nContrasena=ui->lineEdit_7->text()+"|";//retorna la nueva contrasena
    rContrasena=ui->lineEdit_8->text()+"|";
    cosito = "|";
    correo=ui->lineEdit_15->text();
    if(nombreApellido!=""&&direc!=""&&nUsuario!=""&&nContrasena!=""&&rContrasena!=""&&ui->lineEdit_4->text()!="")//&&ui->lineEdit_3->text()!=""&&ui->lineEdit_2->text()!=""&&ui->lineEdit_10->text()!=""&&ui->lineEdit_9->text()!=""&&ui->lineEdit_11->text()!=""&&ui->lineEdit_12->text()!=""&&ui->lineEdit_13->text()!="")
    {
        if(nContrasena==rContrasena)
        {
            tCredito=ui->lineEdit_2->text().toInt();
            iMensual=ui->lineEdit_3->text().toInt();
            iMensualFamiliar=ui->lineEdit_9->text().toInt();
            telEmpresa=ui->lineEdit_11->text().toInt();
            tiempoLaborando=ui->lineEdit_12->text().toInt();
            gastosTotales=ui->lineEdit_13->text().toInt();
            cel=ui->lineEdit_14->text().toInt();
            nCedula=ui->lineEdit_4->text().toInt();//retorna el numero de cedula

            if(iMensual<10000000&&gastosTotales<iMensualFamiliar)
            {


                QString filename = "/Users/juanpablorey/Desktop/Proyecto/usuario5.txt";
                QFile file(filename);
                file.open(QIODevice::ReadOnly);
                QString guarda1=file.readAll();
                file.close();


                file.open(QIODevice::WriteOnly | QIODevice::Text);
                QString hole;
                QTextStream stream(&hole);
                stream << guarda1;
                stream << nUsuario;
                stream << nContrasena;
                stream << nombreApellido;
                stream << sexo;
                stream << fecha;
                stream << estadoCivil;
                stream << direc;
                stream << nCedula;
                stream << cosito;
                stream << tCredito;
                stream << cosito;
                stream << iMensual;
                stream << cosito;
                stream << iMensualFamiliar;
                stream << cosito;
                stream << telEmpresa;
                stream << cosito;
                stream << tiempoLaborando;
                stream << cosito;
                stream << gastosTotales;
                stream << cosito;
                stream << cel;
                stream << cosito;
                stream << correo;


                stream << "\n";



                QTextStream outputToFile(&file);
                outputToFile << hole;
                file.close();



                close();
                inicio cuentaU1;
                cuentaU1.setModal(true);
                cuentaU1.exec();
            }
        }
        else
        {
            QMessageBox::warning(this,"Error","Sus contraseñas no coinciden, vuelva intentarlo.");
            ui->lineEdit_7->clear();
            ui->lineEdit_8->clear();

        }
    }
}

void NuevoUsuario::on_pushButton_2_clicked()
{
    close();
    inicio ini3;
    ini3.setModal(true);
    ini3.exec();
}
