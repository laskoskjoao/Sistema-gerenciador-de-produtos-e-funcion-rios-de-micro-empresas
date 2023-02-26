#ifndef ADICIONAR_H
#define ADICIONAR_H

#include <QWidget>
#include <QMessageBox>
#include <QtSql>

namespace Ui {
class Adicionar;
}

class Adicionar : public QWidget
{
    Q_OBJECT

public:
    explicit Adicionar(QWidget *parent = nullptr, QString tipoP = " "); //tipoP -> Saber se tem que gerar uma aba para adicioanr um funcionário ou um produto.
    ~Adicionar();

private slots:
    void on_botaoAdicionar_clicked();

private:
    Ui::Adicionar *ui;
    QString tipo; //Tipo de "adicionagem" - produto ou funcionário.
    QSqlDatabase bancoDados;
};

#endif // ADICIONAR_H
