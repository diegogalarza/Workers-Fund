#ifndef APROBARAUXILIO_H
#define APROBARAUXILIO_H

#include <QDialog>

namespace Ui {
class aprobarAuxilio;
}

class aprobarAuxilio : public QDialog
{
    Q_OBJECT

public:
    explicit aprobarAuxilio(QWidget *parent = 0);
    ~aprobarAuxilio();

private slots:
    void on_pushButton_clicked();

private:
    Ui::aprobarAuxilio *ui;
};

#endif // APROBARAUXILIO_H
