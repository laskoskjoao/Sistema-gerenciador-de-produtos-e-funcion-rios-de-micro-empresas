#ifndef GERENCIADORAINTERFACE_H
#define GERENCIADORAINTERFACE_H

#include "gerenciadorafuncionarios.h"
#include "gerenciadoraprodutos.h"
#include "QtDebug"

class Sistema;

class GerenciadoraInterface
{
private:
    bool menuGerado;
    GerenciadoraProdutos* gerenciadoraProdutos;
    GerenciadoraFuncionarios* gerenciadoraFuncionarios;                     //Gerenciadora gráfica da janela principal. É preciso essa classe conhecer para poder modificar as abas e criar os menus.
    Sistema* sistema;
public:
    GerenciadoraInterface(Sistema* sistemaP = NULL);
    void constroiMenuFuncionarios();
    void constroiMenuProdutos();
};

#endif // GERENCIADORAINTERFACE_H
