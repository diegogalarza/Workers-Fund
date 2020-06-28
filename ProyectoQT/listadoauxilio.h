#ifndef LISTADOAUXILIO_H
#define LISTADOAUXILIO_H

#include <QDialog>

namespace Ui {
class listadoAuxilio;
}

class listadoAuxilio : public QDialog
{
    Q_OBJECT

public:
    explicit listadoAuxilio(QWidget *parent = 0);
    ~listadoAuxilio();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::listadoAuxilio *ui;
};

#endif // LISTADOAUXILIO_H
