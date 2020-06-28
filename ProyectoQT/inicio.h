#ifndef INICIO_H
#define INICIO_H

#include <QDialog>
#include <QTCore>

namespace Ui {
class inicio;
}

class inicio : public QDialog
{
    Q_OBJECT
    
public:
    explicit inicio(QWidget *parent = 0);
    ~inicio();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    QStringList verifica();

private:
    Ui::inicio *ui;
protected:
    QString usuario;//crea la variable donde se guardara el usuario
    QString contrasena;//crea la variable donde se guardara la contrasena
};

#endif // INICIO_H
