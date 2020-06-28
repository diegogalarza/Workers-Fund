#include "faq.h"
#include "ui_faq.h"
#include "cuentadelusuario.h"
#include <QMessageBox>
#define TEXTO_1 "Javefondos le presta a sus usuarios los servicios principales\n" \
                "de Auxilios, Ahorro y Credito, en donde el usuario tiene la \n"\
                "posibilidad de pedir un auxilio por calamidad domestica, asi \n"\
                "como tambien un auxilio educativo; para la solicitud de un \n"\
                "credito tendra una tasa de interes mensual."
#define TEXTO_2 "El servicio de ahorro tiene un tiempo de duracion indefinido\n"\
                "hasta que el usuario desee cancelar su subscripcion."
#define TEXTO_3 "Una solicitud de credito no es aprobada por varios motivos:\n"\
        "- El usuario debe llevar mas de un año en el fondo \n"\
        "- El usuario debe estar al dia con el pago de la plataforma,\n"\
        "de la administracion, seguro de vida (IVA incluido).\n"\
        "- El monto max de prestamo es de 42 SMMLV.\n"\
        "- El maximo de tiempo del credito es de 48 meses.\n"

#define TEXTO_4 "El tiempo de duracion de los tramites son de:\n"\
        "-Credito: 8 dias habiles\n"\
        "-Ahorro: Consulta inmediata.\n"\
        "-Auxilio: 15 dias a 1 mes.\n"\



FAQ::FAQ(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FAQ)
{
    ui->setupUi(this);
}

FAQ::~FAQ()
{
    delete ui;
}

void FAQ::on_pushButton_clicked()//Vuelve al inicio
{
    close();
    cuentaDelUsuario cuenta2;
    cuenta2.setModal(true);
    cuenta2.exec();
}


void FAQ::on_pushButton_2_clicked()//seleccion pregunta
{
    if(ui->comboBox->currentText()=="1. ¿ Que servicios presta el fondo ?")
    {
        ui->respuesta->setText(TEXTO_1);
    }
    else if(ui->comboBox->currentText()=="2. ¿ Cuanto dura cada servicio ?")
    {
        ui->respuesta->setText(TEXTO_2);

    }
    else if(ui->comboBox->currentText()=="3. ¿ Porque no se aprueba un credito ?")
    {
        ui->respuesta->setText(TEXTO_3);

    }
    else if(ui->comboBox->currentText()=="4. ¿ Cuanto tiempo dura un tramite ?")
    {
        ui->respuesta->setText(TEXTO_4);
    }
}
