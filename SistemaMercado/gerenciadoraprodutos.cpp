#include "gerenciadoraprodutos.h"

GerenciadoraProdutos::GerenciadoraProdutos()
{
    abaAdicionarProduto = new Adicionar(NULL, "P");
    abaExcluirProduto = new Excluir(NULL, "P");
    abaProcurarProduto = new Procurar(NULL, "P");
    abaListarProdutos = new Listar(NULL, "P");
}

Adicionar* GerenciadoraProdutos::getAdicionar(){
    return abaAdicionarProduto;
}

Excluir* GerenciadoraProdutos::getExcluir(){
    return abaExcluirProduto;
}

Procurar* GerenciadoraProdutos::getProcurar(){
    return abaProcurarProduto;
}

Listar* GerenciadoraProdutos::getListar(){
    return abaListarProdutos;
}

GerenciadoraProdutos::~GerenciadoraProdutos(){
    delete(abaAdicionarProduto);
    delete(abaExcluirProduto);
    delete(abaProcurarProduto);
    delete(abaListarProdutos);
}
