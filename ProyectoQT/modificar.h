#ifndef MODIFICAR_H
#define MODIFICAR_H

#include <QDialog>

namespace Ui {
class modificar;
}

class modificar : public QDialog
{
    Q_OBJECT
    
public:
    explicit modificar(QWidget *parent = 0);
    ~modificar();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::modificar *ui;
};

#endif // MODIFICAR_H
