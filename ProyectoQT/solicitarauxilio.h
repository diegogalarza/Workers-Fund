#ifndef SOLICITARAUXILIO_H
#define SOLICITARAUXILIO_H

#include <QDialog>

namespace Ui {
class solicitarAuxilio;
}

class solicitarAuxilio : public QDialog
{
    Q_OBJECT

public:
    explicit solicitarAuxilio(QWidget *parent = 0);
    ~solicitarAuxilio();

private slots:
    void on_toolButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::solicitarAuxilio *ui;
protected:
    QString tAuxilio;
    QString cosito3;
    int tFactura;
};

#endif // SOLICITARAUXILIO_H
