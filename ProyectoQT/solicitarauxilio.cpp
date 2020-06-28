#include "solicitarauxilio.h"
#include "ui_solicitarauxilio.h"
#include <QMessageBox>
#include <cuentadelusuario.h>
#include <iostream>
#include <QIntValidator>
#include <QRegExp>
#include <QRegExpValidator>
#include <QTextStream>
#include <QFile>
solicitarAuxilio::solicitarAuxilio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::solicitarAuxilio)
{
    ui->setupUi(this);
    QIntValidator *roll = new QIntValidator(1,1000000000);
    ui->lineEdit->setValidator(roll);
}

solicitarAuxilio::~solicitarAuxilio()
{
    delete ui;
}

void solicitarAuxilio::on_toolButton_clicked()//informacion de tipos de auxilio
{
    QMessageBox::information(this,"Informacion","Estos son los tipos de auxilio a solicitar:\n\n1 =  Auxilio por Calamidad Doméstica\n(Se entiende por calamidad domestica, toda desgracia o desastre que afecte al"
                             "asociado o a algún integrante de su grupo familiar inscrito en"
                             "Javefondos, en cualquier caso fortuito de la habitación del"
                             "asociado, unicamente, donde haya daño parcial o total del inmueble.)"
                             "\n2 =  Auxilio Educativo\n(Auxilio que se entrega en temporada escolar, al cual tienen "
                             "derecho los asociados que estudien o cualquier persona de su grupo familiar bÃ¡sico "
                             "que tenga vinculación académica.)\n");

}

void solicitarAuxilio::on_pushButton_3_clicked()//vuelve al menu
{
    close();
    cuentaDelUsuario cuent;
    cuent.setModal(true);
    cuent.exec();
}

void solicitarAuxilio::on_pushButton_clicked()//boton para solicitar
{
    tAuxilio=ui->comboBox->currentText();
    cosito3="|";
    tFactura=ui->lineEdit->text().toInt();
    QString filename = "/Users/juanpablorey/Desktop/Proyecto/auxilios.txt";
    QFile file(filename);
    file.open(QIODevice::ReadOnly);
    QString guarda3=file.readAll();
    file.close();

    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QString holee;
    QTextStream stream(&holee);
    stream << guarda3;
    stream << tAuxilio;
    stream << cosito3;
    stream << tFactura;
    stream << "\n";
    QTextStream outputToFile(&file);
    outputToFile << holee;
    file.close();

    QMessageBox::information(this,"Informacion","Su solicitud se realizo con exito.");


    ui->lineEdit->clear();
}
