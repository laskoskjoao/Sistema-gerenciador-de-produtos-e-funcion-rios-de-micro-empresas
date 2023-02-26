#ifndef GERENCIADORAFUNCIONARIOS_H
#define GERENCIADORAFUNCIONARIOS_H

#include "adicionar.h"
#include "excluir.h"
#include "procurar.h"
#include "listar.h"

class GerenciadoraFuncionarios
{
private:
    Adicionar* abaAdicionarFuncionario;
    Excluir* abaExcluirFuncionario;
    Procurar* abaProcurarFuncionario;
    Listar* abaListarFuncionarios;
public:
    GerenciadoraFuncionarios();
    Adicionar* getAdicionar();
    Excluir* getExcluir();
    Procurar* getProcurar();
    Listar* getListar();
    ~GerenciadoraFuncionarios();
};

#endif // GERENCIADORAFUNCIONARIOS_H
