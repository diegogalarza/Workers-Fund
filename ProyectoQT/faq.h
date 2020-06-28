#ifndef FAQ_H
#define FAQ_H

#include <QDialog>

namespace Ui {
class FAQ;
}

class FAQ : public QDialog
{
    Q_OBJECT

public:
    explicit FAQ(QWidget *parent = 0);
    ~FAQ();

private slots:
    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

private:
    Ui::FAQ *ui;
};

#endif // FAQ_H
