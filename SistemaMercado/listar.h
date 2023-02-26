#ifndef LISTAR_H
#define LISTAR_H

#include <QWidget>
#include <QMessageBox>
#include <QtSql>

namespace Ui {
class Listar;
}

class Listar : public QWidget
{
    Q_OBJECT

public:
    explicit Listar(QWidget *parent = nullptr, QString tipoP = " ");
    void informaResultados();
    ~Listar();

private:
    Ui::Listar *ui;
    QString tipo;
    QSqlDatabase bancoDados;
};

#endif // LISTAR_H
