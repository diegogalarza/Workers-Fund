#ifndef EMPLEADOINTRO_H
#define EMPLEADOINTRO_H

#include <QDialog>

namespace Ui {
class empleadoIntro;
}

class empleadoIntro : public QDialog
{
    Q_OBJECT
    
public:
    explicit empleadoIntro(QWidget *parent = 0);
    ~empleadoIntro();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::empleadoIntro *ui;
protected:
    QString usuarioE;
    QString contrasenaE;
};

#endif // EMPLEADOINTRO_H
