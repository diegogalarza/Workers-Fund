#include "empleadointro.h"
#include "ui_empleadointro.h"
#include "empleadomenu.h"
#include <QTextStream>
#include <QFile>

empleadoIntro::empleadoIntro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::empleadoIntro)
{
    ui->setupUi(this);
}

empleadoIntro::~empleadoIntro()
{
    delete ui;
}

void empleadoIntro::on_pushButton_clicked()
{
    usuarioE=ui->lineEdit->text();
    contrasenaE=ui->lineEdit_2->text();
    if(usuarioE=="administrador"&&contrasenaE=="admi")
    {
        close();
        empleadoMenu em;
        em.setModal(true);
        em.exec();

    }
}
