#include "gerenciadorafuncionarios.h"

GerenciadoraFuncionarios::GerenciadoraFuncionarios()
{
    abaAdicionarFuncionario = new Adicionar(NULL ,"F");
    abaExcluirFuncionario = new Excluir(NULL, "F");
    abaProcurarFuncionario = new Procurar(NULL, "F");
    abaListarFuncionarios = new Listar(NULL, "F");
}

Adicionar* GerenciadoraFuncionarios::getAdicionar(){
    return abaAdicionarFuncionario;
}

Excluir* GerenciadoraFuncionarios::getExcluir(){
    return abaExcluirFuncionario;
}

Procurar* GerenciadoraFuncionarios::getProcurar(){
    return abaProcurarFuncionario;
}

Listar* GerenciadoraFuncionarios::getListar(){
    return abaListarFuncionarios;
}

GerenciadoraFuncionarios::~GerenciadoraFuncionarios()
{
    delete(abaAdicionarFuncionario);
    delete(abaExcluirFuncionario);
    delete(abaProcurarFuncionario);
    delete(abaListarFuncionarios);
}
