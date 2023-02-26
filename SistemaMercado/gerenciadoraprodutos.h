#ifndef GERENCIADORAPRODUTOS_H
#define GERENCIADORAPRODUTOS_H

#include "adicionar.h"
#include "excluir.h"
#include "procurar.h"
#include "listar.h"

class GerenciadoraProdutos
{
private:
    Adicionar* abaAdicionarProduto;
    Excluir* abaExcluirProduto;
    Procurar* abaProcurarProduto;
    Listar* abaListarProdutos;
public:
    GerenciadoraProdutos();
    ~GerenciadoraProdutos();
    Adicionar* getAdicionar();
    Excluir* getExcluir();
    Procurar* getProcurar();
    Listar* getListar();
};

#endif // GERENCIADORAPRODUTOS_H
