#include "empleadomenu.h"
#include "ui_empleadomenu.h"
#include "empleadointro.h"
#include "modificar.h"
#include "verasociado.h"
#include "vercreditos.h"
#include "verauxilios.h"
#include "verahorros.h"
#include "aprobarauxilio.h"
#include "aprobarcredito.h"

empleadoMenu::empleadoMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::empleadoMenu)
{
    ui->setupUi(this);
}

empleadoMenu::~empleadoMenu()
{
    delete ui;
}

void empleadoMenu::on_pushButton_5_clicked()//cerrar sesion
{
    close();
    empleadoIntro ei;
    ei.setModal(true);
    ei.exec();
}

void empleadoMenu::on_pushButton_clicked()//pasa a modificar
{
    close();
    modificar mo;
    mo.setModal(true);
    mo.exec();
}

void empleadoMenu::on_pushButton_8_clicked()//pasar a ver asociados
{
    close();
    verAsociado ver1;
    ver1.setModal(true);
    ver1.exec();
}


void empleadoMenu::on_pushButton_2_clicked()//passar a ver creditos
{
    close();
    verCreditos cre1;
    cre1.setModal(true);
    cre1.exec();
}

void empleadoMenu::on_pushButton_3_clicked()//pasar a ver auxilios
{
    close();
    verAuxilios aux1;
    aux1.setModal(true);
    aux1.exec();
}



void empleadoMenu::on_pushButton_4_clicked()//pasar a ver ahorros
{
    close();
    verahorros aho;
    aho.setModal(true);
    aho.exec();

}

void empleadoMenu::on_pushButton_6_clicked()//pasar a aprobar auxilio
{
    close();
    aprobarAuxilio aa;
    aa.setModal(true);
    aa.exec();
}

void empleadoMenu::on_pushButton_7_clicked()
{
    close();
    aprobarCredito AC;
    AC.setModal(true);
    AC.exec();
}
