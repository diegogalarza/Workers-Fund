#include "solicitudcredito.h"
#include "ui_solicitudcredito.h"

solicitudCredito::solicitudCredito(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::solicitudCredito)
{
    ui->setupUi(this);
}

solicitudCredito::~solicitudCredito()
{
    delete ui;
}
