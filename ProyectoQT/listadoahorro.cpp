#include "listadoahorro.h"
#include "ui_listadoahorro.h"
#include "cuentadelusuario.h"
#include "informereporte.h"
ListadoAhorro::ListadoAhorro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListadoAhorro)
{
    ui->setupUi(this);
}

ListadoAhorro::~ListadoAhorro()
{
    delete ui;
}

void ListadoAhorro::on_pushButton_3_clicked()
{
    close();
    cuentaDelUsuario cuenta4;
    cuenta4.setModal(true);
    cuenta4.exec();
}

void ListadoAhorro::on_pushButton_2_clicked()
{
    close();
    informeReporte info2;
    info2.setModal(true);
    info2.exec();

}
