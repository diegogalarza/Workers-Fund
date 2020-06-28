#include "vercreditos.h"
#include "ui_vercreditos.h"
#include "empleadomenu.h"
#include <QTextStream>
#include <QFile>
#include <QDebug>

verCreditos::verCreditos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::verCreditos)
{
    ui->setupUi(this);
}

verCreditos::~verCreditos()
{
    delete ui;
}

void verCreditos::on_pushButton_clicked()
{
    close();
    empleadoMenu men2;
    men2.setModal(true);
    men2.exec();
}
QStringList verCreditos::leerAsociados()
{
    QString filename = "/Users/juanpablorey/Desktop/Proyecto/creditos.txt";
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
            y=lista[3]+", $"+lista[0]+", "+lista[1]+", "+lista[2];

            ui->comboBox->addItem(y);


        }
        file.close();
        return lista;
        x=2;
    }
}

void verCreditos::on_pushButton_2_clicked()
{
    QStringList listica3 =leerAsociados();
    ui->pushButton_2->hide();
}
