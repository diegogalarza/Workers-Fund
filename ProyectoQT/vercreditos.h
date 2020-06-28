#ifndef VERCREDITOS_H
#define VERCREDITOS_H

#include <QDialog>

namespace Ui {
class verCreditos;
}

class verCreditos : public QDialog
{
    Q_OBJECT

public:
    explicit verCreditos(QWidget *parent = 0);
    ~verCreditos();

private slots:
    void on_pushButton_clicked();
    QStringList leerAsociados();


    void on_pushButton_2_clicked();

private:
    Ui::verCreditos *ui;
};

#endif // VERCREDITOS_H
