#ifndef EMPLEADOMENU_H
#define EMPLEADOMENU_H

#include <QDialog>

namespace Ui {
class empleadoMenu;
}

class empleadoMenu : public QDialog
{
    Q_OBJECT
    
public:
    explicit empleadoMenu(QWidget *parent = 0);
    ~empleadoMenu();
    
private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::empleadoMenu *ui;
};

#endif // EMPLEADOMENU_H
