#include "ingresoahorro.h"
#include "ui_ingresoahorro.h"
#include "cuentadelusuario.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QRegExp>
#include <QRegExpValidator>
#include <QTextStream>
#include <QFile>
ingresoAhorro::ingresoAhorro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ingresoAhorro)
{
    ui->setupUi(this);

    QIntValidator *roll1 = new QIntValidator(1,1000000000);
    ui->lineEdit_3->setValidator(roll1);
}

ingresoAhorro::~ingresoAhorro()
{
    delete ui;
}

void ingresoAhorro::on_pushButton_5_clicked()//boton para volver al menu
{
    close();
    cuentaDelUsuario cuentica;
    cuentica.setModal(true);
    cuentica.exec();
}

void ingresoAhorro::on_pushButton_clicked()//boton para mostrar la cuota de ahorro
{
    if(ui->lineEdit->text()!=""&&ui->lineEdit_2->text()!="")
    {
        aMensual=ui->lineEdit->text().toInt();
        nCuenta=ui->lineEdit_2->text().toInt();
        QMessageBox::information(this,"Informacion","la cuota de ahorro");//terminar el boton

    }
}

void ingresoAhorro::on_pushButton_2_clicked()//boton para mostrar el ahorro acumulado
{
    if(ui->lineEdit->text()!=""&&ui->lineEdit_2->text()!="")
    {
        aMensual=ui->lineEdit->text().toInt();
        nCuenta=ui->lineEdit_2->text().toInt();
        QMessageBox::information(this,"Informacion","Muestra el ahorro acumulado hasta el momento");//terminar el boton
    }
}

void ingresoAhorro::on_pushButton_3_clicked()//boton para aceptar
{
    if(ui->lineEdit->text()!=""&&ui->lineEdit_2->text()!="")
    {
        aMensual=ui->lineEdit->text();
        nCuenta=ui->lineEdit_2->text();
        ahorro=ui->lineEdit_3->text().toInt();
        cosito4="|";
        if(aMensual!="" && nCuenta!="")
        {
            verifica();
            close();
            cuentaDelUsuario cuentica3;
            cuentica3.setModal(true);
            cuentica3.exec();
        }
        QMessageBox::information(this,"Informacion","Su ahorro se a realizado con exito");//terminar el boton
    }
}
QStringList ingresoAhorro::verifica()
{
    QString filename = "/Users/juanpablorey/Desktop/Proyecto/usuario5.txt";
    QFile file(filename);
    file.open(QIODevice::ReadWrite|QIODevice::Text);
    QTextStream stream(&file);

    QString contenido;
    QStringList lista;
    while(!file.atEnd()){
        contenido=file.readLine();
        lista=contenido.split("|");
        if(lista[0] == aMensual )
        {
            if(lista[1]== nCuenta)
            {
                QString ingre=lista[11];
                int sueldo1=ingre.toInt();
                int maximo=sueldo1*0.1;
                int minimo = sueldo1*0.03;
                QString strin1 =QString:: number(minimo);
                QString strin2 =QString::number(maximo);
                QString limite =strin1+"-"+strin2;
                QMessageBox::information(this,"Informacion",limite);

                if(ui->lineEdit_3->text().toInt() >minimo)
                {
                    if(ui->lineEdit_3->text().toInt() < maximo)
                    {
                        QString filename = "/Users/juanpablorey/Desktop/Proyecto/ahorros.txt";
                        QFile file(filename);
                        file.open(QIODevice::ReadOnly);
                        QString guarda4=file.readAll();
                        file.close();


                        file.open(QIODevice::WriteOnly | QIODevice::Text);
                        QString holeee;
                        QTextStream stream(&holeee);
                        stream << guarda4;
                        stream << aMensual;
                        stream << cosito4;
                        stream << nCuenta;
                        stream << cosito4;
                        stream << ahorro;
                        stream << "\n";


                        QTextStream outputToFile(&file);
                        outputToFile << holeee;
                        QMessageBox::information(this,"Informacion","Su ahorro se a realizado con exito");

                    }
                    else
                    {
                        QMessageBox::warning(this,"Error","El valor ingresado es mayor que lo aceptado , vuelva a intentarlo.");
                        ui->lineEdit_3->clear();

                    }
                }
                else
                {
                    QMessageBox::warning(this,"Error","El valor ingresado es menor que lo aceptado , vuelva a intentarlo.");
                    ui->lineEdit_3->clear();

                }
            }
            else
            {
                //Aqui existe el usuario pero la contrasena esta mala
                QMessageBox::warning(this,"Error","El usuario o la contraseña no corresponden, vuelva a intentarlo.");
                ui->lineEdit_2->clear();
                ui->lineEdit->clear();
            }
            }
        }

    file.close();
    return lista;
}


