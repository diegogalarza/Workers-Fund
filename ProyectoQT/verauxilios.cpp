#include "verauxilios.h"
#include "ui_verauxilios.h"
#include "empleadomenu.h"
#include <QTextStream>
#include <QFile>
#include <QDebug>

verAuxilios::verAuxilios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::verAuxilios)
{
    ui->setupUi(this);
}

verAuxilios::~verAuxilios()
{
    delete ui;
}

void verAuxilios::on_pushButton_clicked()// vuelve al menu
{
    close();
    empleadoMenu men1;
    men1.setModal(true);
    men1.exec();
}
QStringList verAuxilios::leerAsociados()
{
    QString filename = "/Users/juanpablorey/Desktop/Proyecto/auxilios.txt";
    QFile file(filename);
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream stream(&file);

    QString contenido;
    QStringList lista;
    QString y;
    int x=1;

    while( x==1)
    {
        while(!file.atEnd())
        {
            contenido=file.readLine();
            lista=contenido.split("|");
            y=lista[0]+", "+lista[1];

            ui->comboBox->addItem(y);


        }
        file.close();
        return lista;
        x=2;
    }
}

void verAuxilios::on_pushButton_2_clicked()
{
    QStringList listica1 =leerAsociados();
    ui->pushButton_2->hide();

}
