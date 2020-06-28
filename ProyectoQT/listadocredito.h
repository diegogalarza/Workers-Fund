#ifndef LISTADOCREDITO_H
#define LISTADOCREDITO_H

#include <QDialog>

namespace Ui {
class listadoCredito;
}

class listadoCredito : public QDialog
{
    Q_OBJECT

public:
    explicit listadoCredito(QWidget *parent = 0);
    ~listadoCredito();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::listadoCredito *ui;
};

#endif // LISTADOCREDITO_H
