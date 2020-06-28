#include "aprobarcredito.h"
#include "ui_aprobarcredito.h"
#include "empleadomenu.h"
#include <QTextStream>
#include <QFile>

aprobarCredito::aprobarCredito(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aprobarCredito)
{
    ui->setupUi(this);
}

aprobarCredito::~aprobarCredito()
{
    delete ui;
}

void aprobarCredito::on_pushButton_clicked()
{
    close();
    empleadoMenu men4;
    men4.setModal(true);
    men4.exec();
}
QStringList aprobarCredito::leerAhorros()
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
void aprobarCredito::on_pushButton_3_clicked()
{
    QString ne= ui->comboBox->currentText()+"|";
    QString filename = "/Users/juanpablorey/Desktop/Proyecto/estado.txt";
    QFile file(filename);
    file.open(QIODevice::ReadOnly);
    QString guarda7=file.readAll();
    file.close(); file.open(QIODevice::WriteOnly | QIODevice::Text);
    QString holes;
    QTextStream stream(&holes);
    stream << guarda7;
    stream << ne;
    stream << "aprobado";
    stream << "\n";
    QTextStream outputToFile(&file);
    outputToFile << holes;
    file.close();

}

void aprobarCredito::on_pushButton_2_clicked()
{
    QStringList listica4 =leerAhorros();
    ui->pushButton_2->hide();
}

void aprobarCredito::on_pushButton_4_clicked()
{
    QString nu= ui->comboBox->currentText()+"|";
    QString filename = "/Users/juanpablorey/Desktop/Proyecto/estado.txt";
    QFile file(filename);
    file.open(QIODevice::ReadOnly);
    QString guarda8=file.readAll();
    file.close(); file.open(QIODevice::WriteOnly | QIODevice::Text);
    QString holeii;
    QTextStream stream(&holeii);
    stream << guarda8;
    stream << nu;
    stream << "rechazado";
    stream << "\n";
    QTextStream outputToFile(&file);
    outputToFile << holeii;
    file.close();
}
