#ifndef VERASOCIADO_H
#define VERASOCIADO_H

#include <QDialog>

namespace Ui {
class verAsociado;
}

class verAsociado : public QDialog
{
    Q_OBJECT

public:
    explicit verAsociado(QWidget *parent = 0);
    ~verAsociado();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    QStringList leerAsociados();


private:
    Ui::verAsociado *ui;
};

#endif // VERASOCIADO_H
