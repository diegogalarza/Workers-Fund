#include "inicio.h"
#include "ui_inicio.h"
#include <QMessageBox>
#include <nuevousuario.h>
#include <cuentadelusuario.h>
#include <iostream>
#include <QTextStream>
#include <QFile>
#include <QDebug>


inicio::inicio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inicio)
{
    ui->setupUi(this);
}

inicio::~inicio()
{
    delete ui;
}

void inicio::on_pushButton_clicked()//boton para iniciar sesion
{
    usuario = ui->lineEdit_2-> text();//usa punteros para retornar la info que se escriba en la parte del usuario
    contrasena = ui->lineEdit->text();//usa punteros para retornar la info que se escriba en la parte de la contraseña

    if(usuario!="" && contrasena!="")
    {
        verifica();
    }
}


void inicio::on_pushButton_2_clicked()
{
    close();
    NuevoUsuario nuevoU; //crea el nuevo objeto
    nuevoU.setModal(true);//le permite cambiar de ventana
    nuevoU.exec();//ejecuta el cambio
}
QStringList inicio::verifica()
{
    QString filename = "/Users/juanpablorey/Desktop/Proyecto/usuario5.txt";
    QFile file(filename);
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream stream(&file);

    QString contenido;
    QStringList lista;
    while(!file.atEnd()){
        contenido=file.readLine();
        lista=contenido.split("|");
        if(lista[0] == usuario ){
            if(lista[1]== contrasena){
                //Aqui usiario y contrasena buenas
                close();
                cuentaDelUsuario cu; //crea el nuevo objeto
                cu.setModal(true);//le permite cambiar de ventana
                cu.exec();//ejecuta el
            }
            else{
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
