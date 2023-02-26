#ifndef PROCURAR_H
#define PROCURAR_H

#include <QWidget>
#include <QMessageBox>
#include <QtSql>

namespace Ui {
class Procurar;
}

class Procurar : public QWidget
{
    Q_OBJECT

public:
    explicit Procurar(QWidget *parent = nullptr, QString tipoP = " ");
    void informaResultados();
    ~Procurar();

private slots:
    void on_botaoProcurar_clicked();

private:
    Ui::Procurar *ui;
    QString tipo;
    QSqlDatabase bancoDados;
};

#endif // PROCURAR_H
