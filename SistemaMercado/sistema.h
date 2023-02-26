#ifndef SISTEMA_H
#define SISTEMA_H

#include <QMainWindow>
#include "gerenciadorafuncionarios.h"
#include "gerenciadoraprodutos.h"

namespace Ui {
class Sistema;
}

class Sistema : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sistema(QWidget *parent = nullptr, QString usuarioP = "", QString funcaoP = "G");
    void construirMenuProdutos();
    void construirMenuFuncionarios();
    ~Sistema();
private slots:
    void on_actionGerenciar_Produtos_triggered();

    void on_actionGerenciar_Funcionarios_triggered();

    void on_actionSair_triggered();

private:
    Ui::Sistema *ui;
    QString usuario;
    QString funcaoUsuario;
    GerenciadoraProdutos* gerenciadoraProdutos;
    GerenciadoraFuncionarios* gerenciadoraFuncionarios;
    bool menuGerado;
};

#endif // SISTEMA_H
