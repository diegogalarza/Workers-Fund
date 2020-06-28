#include "verasociado.h"
#include "ui_verasociado.h"
#include "empleadomenu.h"
#include <QTextStream>
#include <QFile>
#include <QDebug>
verAsociado::verAsociado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::verAsociado)
{
    ui->setupUi(this);
}

verAsociado::~verAsociado()
{
    delete ui;
}

void verAsociado::on_pushButton_clicked()// MENU
{
    close();
    empleadoMenu men;
    men.setModal(true);
    men.exec();
}

void verAsociado::on_pushButton_2_clicked()
{
    QStringList listica =leerAsociados();
    ui->pushButton_2->hide();
}
QStringList verAsociado::leerAsociados()
{
    QString filename = "/Users/juanpablorey/Desktop/Proyecto/usuario5.txt";
    QFile file(filename);
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream stream(&file);

    QString contenido;
    QStringList lista;
    int x=1;

    while( x==1)
    {
        while(!file.atEnd())
        {
            contenido=file.readLine();
            lista=contenido.split("|");
            ui->comboBox->addItem(lista[2]);


        }
        file.close();
        return lista;
        x=2;
    }
}

