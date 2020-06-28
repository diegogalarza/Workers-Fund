#include "modificar.h"
#include "ui_modificar.h"
#include "empleadomenu.h"

modificar::modificar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modificar)
{
    ui->setupUi(this);
}

modificar::~modificar()
{
    delete ui;
}

void modificar::on_pushButton_clicked()//MODIFICAR
{
    close();
    empleadoMenu em1;
    em1.setModal(true);
    em1.exec();
}

void modificar::on_pushButton_2_clicked()
{

}
