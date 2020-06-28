#ifndef INFORMEREPORTE_H
#define INFORMEREPORTE_H

#include <QDialog>

namespace Ui {
class informeReporte;
}

class informeReporte : public QDialog
{
    Q_OBJECT

public:
    explicit informeReporte(QWidget *parent = 0);
    ~informeReporte();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::informeReporte *ui;
};

#endif // INFORMEREPORTE_H
