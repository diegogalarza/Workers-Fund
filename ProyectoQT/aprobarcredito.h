#ifndef APROBARCREDITO_H
#define APROBARCREDITO_H

#include <QDialog>

namespace Ui {
class aprobarCredito;
}

class aprobarCredito : public QDialog
{
    Q_OBJECT

public:
    explicit aprobarCredito(QWidget *parent = 0);
    ~aprobarCredito();

private slots:
    void on_pushButton_clicked();
    QStringList leerAhorros();


    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::aprobarCredito *ui;
};

#endif // APROBARCREDITO_H
