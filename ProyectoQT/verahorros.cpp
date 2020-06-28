#include "verahorros.h"
#include "ui_verahorros.h"
#include "empleadomenu.h"
#include <QTextStream>
#include <QFile>
#include <QDebug>

verahorros::verahorros(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::verahorros)
{
    ui->setupUi(this);
}

verahorros::~verahorros()
{
    delete ui;
}

void verahorros::on_pushButton_clicked()
{
    close();
    empleadoMenu mee;
    mee.setModal(true);
    mee.exec();
}
QStringList verahorros::leerAsociados()
{
    QString filename = "/Users/juanpablorey/Desktop/Proyecto/ahorros.txt";
    QFile file(filename);
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream stream(&file);

    QString contenido;
    QStringList lista;
    int x=1;
    QString y=0;

    while( x==1)
    {
        while(!file.atEnd())
        {
            contenido=file.readLine();
            lista=contenido.split("|");
            y=lista[0]+", "+lista[2];

            ui->comboBox->addItem(y);


        }
        file.close();
        return lista;
        x=2;
    }
}

void verahorros::on_pushButton_2_clicked()
{
    QStringList listica4 =leerAsociados();
    ui->pushButton_2->hide();
}
