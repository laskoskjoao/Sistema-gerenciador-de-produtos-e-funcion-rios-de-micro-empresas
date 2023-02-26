#include "gerenciadorainterface.h"
#include "sistema.h"

GerenciadoraInterface::GerenciadoraInterface(Sistema* sistemaP)
{
    Ui::Sistema* ptr;
    ptr = sistemaP->getUi();
    sistemaP->ui->
    //if(!uiSistemaP)
        //QDebug << "Erro! Não é possível é possível gerar a interface gráfica."; //Se não tiver ponteiro para os elementos gráficos de Sistema, não tem como gerenciar o menu.
    menuGerado = false;                  //Variável para verificar se ja existe um menuFuncionarios ou Produtos.
}

void GerenciadoraInterface::constroiMenuFuncionarios(){

}

void GerenciadoraInterface::constroiMenuProdutos(){

}
