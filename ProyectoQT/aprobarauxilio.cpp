#include "aprobarauxilio.h"
#include "ui_aprobarauxilio.h"
#include "empleadomenu.h"

aprobarAuxilio::aprobarAuxilio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aprobarAuxilio)
{
    ui->setupUi(this);
}

aprobarAuxilio::~aprobarAuxilio()
{
    delete ui;
}

void aprobarAuxilio::on_pushButton_clicked()
{
    close();
    empleadoMenu me;
    me.setModal(true);
    me.exec();
}

