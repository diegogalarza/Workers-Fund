#ifndef MODULO_H
#define MODULO_H

#include <QMainWindow>
#include <QTCore>
#include <QDialog>


namespace Ui {
class Modulo;
}

class Modulo : public QMainWindow
{
    Q_OBJECT

public:
    explicit Modulo(QWidget *parent = 0);
    ~Modulo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Modulo *ui;

};

#endif // MODULO_H
