#include "sistema.h"
#include "ui_sistema.h"
#include "formabateste.h"
#include <QDebug>

Sistema::Sistema(QWidget *parent, QString usuarioP, QString funcaoP) :
    QMainWindow(parent),
    ui(new Ui::Sistema)
{
    ui->setupUi(this);

    menuGerado = false;
    gerenciadoraProdutos = NULL;
    gerenciadoraFuncionarios = NULL;

    //Inicializando as informações referentes ao usuário logado.
    usuario = usuarioP;
    funcaoUsuario = funcaoP;

    ui->usuario_txt->setText("Nome: " + usuario);
    if(funcaoUsuario == "G")
        ui->funcao_txt->setText("Função: Gerente");
    else if(funcaoUsuario == "F")
        ui->funcao_txt->setText("Função: Funcionário");

    //Construção da interface de acordo com a função do usuário
    if(funcaoP == "F")
        ui->menuFuncionarios->setEnabled(false);        //Se a foi passado um funcionário simples, devemos desabilitar a aba de gerenciamento de funcionários
}

void Sistema::construirMenuProdutos(){
    if(menuGerado){
        if(gerenciadoraFuncionarios){ //Troca de menus: Funcionários -> Produtos.
            delete(gerenciadoraFuncionarios);
            gerenciadoraFuncionarios = NULL;

            for(int i = 0; i < 4; i++){
                ui->tabWidget->removeTab(ui->tabWidget->currentIndex());
            }

            gerenciadoraProdutos = new GerenciadoraProdutos();
            ui->tabWidget->addTab(gerenciadoraProdutos->getAdicionar(), "Adicionar Produto");
            ui->tabWidget->addTab(gerenciadoraProdutos->getExcluir(), "Excluir Produto");
            ui->tabWidget->addTab(gerenciadoraProdutos->getProcurar(), "Procurar Produto");
            ui->tabWidget->addTab(gerenciadoraProdutos->getListar(), "Listar Produtos");
        }
    }
    else{
        menuGerado = true;
        gerenciadoraProdutos = new GerenciadoraProdutos();
        ui->tabWidget->addTab(gerenciadoraProdutos->getAdicionar(), "Adicionar Produto");
        ui->tabWidget->addTab(gerenciadoraProdutos->getExcluir(), "Excluir Produto");
        ui->tabWidget->addTab(gerenciadoraProdutos->getProcurar(), "Procurar Produto");
        ui->tabWidget->addTab(gerenciadoraProdutos->getListar(), "Listar Produtos");
    }
}

void Sistema::construirMenuFuncionarios(){
    if(menuGerado){
        if(gerenciadoraProdutos){ //Troca de menus: Produtos -> Funcionários.
            delete(gerenciadoraProdutos);
            gerenciadoraProdutos = NULL;
            for(int i = 0; i < 4; i++){
                ui->tabWidget->removeTab(ui->tabWidget->currentIndex());
            }

            gerenciadoraFuncionarios = new GerenciadoraFuncionarios();
            ui->tabWidget->addTab(gerenciadoraFuncionarios->getAdicionar(), "Adicionar Funcionário");
            ui->tabWidget->addTab(gerenciadoraFuncionarios->getExcluir(), "Excluir Funcionário");
            ui->tabWidget->addTab(gerenciadoraFuncionarios->getProcurar(), "Procurar Funcionário");
            ui->tabWidget->addTab(gerenciadoraFuncionarios->getListar(), "Listar Funcionários");
        }
    }
    else{
        menuGerado = true;
        gerenciadoraFuncionarios = new GerenciadoraFuncionarios();
        ui->tabWidget->addTab(gerenciadoraFuncionarios->getAdicionar(), "Adicionar Funcionário");
        ui->tabWidget->addTab(gerenciadoraFuncionarios->getExcluir(), "Excluir Funcionário");
        ui->tabWidget->addTab(gerenciadoraFuncionarios->getProcurar(), "Procurar Funcionário");
        ui->tabWidget->addTab(gerenciadoraFuncionarios->getListar(), "Listar Funcionários");
    }
}

Sistema::~Sistema()
{
    delete ui;
}

void Sistema::on_actionGerenciar_Produtos_triggered()
{
    construirMenuProdutos();
}

void Sistema::on_actionGerenciar_Funcionarios_triggered()
{
    construirMenuFuncionarios();
}

void Sistema::on_actionSair_triggered()
{
    close();
}
