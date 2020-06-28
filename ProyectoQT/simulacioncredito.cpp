#include "simulacioncredito.h"
#include "ui_simulacioncredito.h"
#include <QMessageBox>
#include <cuentadelusuario.h>
#include <iostream>


SimulacionCredito::SimulacionCredito(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SimulacionCredito)
{
    ui->setupUi(this);
}

SimulacionCredito::~SimulacionCredito()
{
    delete ui;
}
void SimulacionCredito::on_pushButton_2_clicked()
{
    close();
    cuentaDelUsuario holis;
    holis.setModal(true);
    holis.exec();
}
void SimulacionCredito::on_pushButton_clicked()// Relacion de pago
{
    if(ui->lineEdit->text()!="" && ui->lineEdit_2->text()!="")
    {
        Imonto=ui->lineEdit->text().toInt();
        Iplazo=ui->lineEdit_2->text().toInt();

        if(Iplazo<=30984114 && Iplazo<=48)
        {
            std::cout << Imonto << std::endl;
            std::cout << Iplazo << std::endl;
            relacion= int((Imonto*0.09)*Iplazo);
            sVida=relacion*0.05;
            iva=int((sVida+20000+15000)*0.16);
            QString sVida1 =QString::number(sVida);
            QString Imonto1 =QString::number(Imonto);
            QString Iplazo1 =QString::number(Iplazo);
            QString iva1 =QString::number(iva);
            QString relacion1 =QString::number(relacion);
            QMessageBox::information(this,"Simulación de credito","Monto : "+Imonto1+"\n"
                                                        "Plazo : "+Iplazo1+"\n"
                                                        "La relación entre el monto y el plazo es : "+relacion1+"\n"
                                                        "Seguro de vida : "+sVida1+"\n"
                                                        "Iva : "+iva1+"\n");

        }
    }
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}





void SimulacionCredito::on_toolButton_clicked()
{
    QMessageBox::information(this,"Informacion","SMMLV(Salario Minimo Mensuales Legales Vigentes) : $737.717\n"
                                                "Pago de administración : $20.000\n"
                                                "Seguro de Vida : es del 5% del credito\n"
                                                "Uso de la plataforma : $15.000"
                                                "Iva : 16%(sobre la adminitración + seguro de vida+ uso de la plataforma)");

}
