#ifndef LISTADOAHORRO_H
#define LISTADOAHORRO_H

#include <QDialog>

namespace Ui {
class ListadoAhorro;
}

class ListadoAhorro : public QDialog
{
    Q_OBJECT

public:
    explicit ListadoAhorro(QWidget *parent = 0);
    ~ListadoAhorro();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ListadoAhorro *ui;
};

#endif // LISTADOAHORRO_H
