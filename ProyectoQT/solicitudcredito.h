#ifndef SOLICITUDCREDITO_H
#define SOLICITUDCREDITO_H

#include <QDialog>

namespace Ui {
class solicitudCredito;
}

class solicitudCredito : public QDialog
{
    Q_OBJECT

public:
    explicit solicitudCredito(QWidget *parent = 0);
    ~solicitudCredito();

private:
    Ui::solicitudCredito *ui;
};

#endif // SOLICITUDCREDITO_H
