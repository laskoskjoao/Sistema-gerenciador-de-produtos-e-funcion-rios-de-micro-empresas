#include "excluir.h"
#include "ui_excluir.h"

Excluir::Excluir(QWidget *parent, QString tipoP) :
    QWidget(parent),
    ui(new Ui::Excluir)
{
    ui->setupUi(this);
    tipo = tipoP;
    //(Banco de Dados) Aqui na construtora carrega a lista acessando o banco de dados(Relativo a Funcionários ou Produtos).
    bancoDados = QSqlDatabase::addDatabase("QSQLITE");
    if(tipo == "P"){
        //lista os produtos
        QString caminhoBD = QCoreApplication::applicationDirPath() + "/produtos.db";
        bancoDados.setDatabaseName(caminhoBD);
        bancoDados.open();
        QSqlQuery query;
        query.prepare("select * from produtos");
        if(query.exec()){
            int linha = 0;
            ui->tableWidget->setColumnCount(3);
            while(query.next()){
                ui->tableWidget->insertRow(linha);
                ui->tableWidget->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tableWidget->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->tableWidget->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
                linha ++;
            }
            //EDITANDO A TABELA DE LISTAGEM
            ui->tableWidget->setColumnWidth(0,360);
            QStringList titulos ={"Nome", "Preço", "Localização"};
            ui->tableWidget->setHorizontalHeaderLabels(titulos);
            ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tableWidget->setStyleSheet("QTableView {selection-background-color:red}");
        }
    }
    else if(tipo == "F"){
        //Lista os funcionários
        QString caminhoBD = QCoreApplication::applicationDirPath() + "/funcionarios.db";
        bancoDados.setDatabaseName(caminhoBD);
        bancoDados.open();
        QSqlQuery query;
        query.prepare("select * from funcionarios");
        if(query.exec()){
            int linha = 0;
            ui->tableWidget->setColumnCount(4);
            while(query.next()){
                ui->tableWidget->insertRow(linha);
                ui->tableWidget->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tableWidget->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->tableWidget->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
                ui->tableWidget->setItem(linha, 3, new QTableWidgetItem(query.value(3).toString()));
                linha ++;
            }
            //EDITANDO A TABELA DE LISTAGEM
            ui->tableWidget->setColumnWidth(0,360);
            QStringList titulos ={"Nome", "Senha", "Salário", "Função"};
            ui->tableWidget->setHorizontalHeaderLabels(titulos);
            ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tableWidget->setStyleSheet("QTableView {selection-background-color:red}");
        }
    }
}

Excluir::~Excluir()
{
    delete ui;
}

void Excluir::on_botaoExcluir_clicked()
{
    //(Banco de Dados) Coleta o texto do item selecionado e com isso acessa o banco de dados para excluir o funcionário ou o produto.
    //passos
    //1° Verifica a linha selecionada
    //2° obtem o nome da linha selecionada
    //3° Deleta do bd
    qDebug("a");
    int linhaExclusao = ui->tableWidget->currentRow();


    if(linhaExclusao > -1){ //Se existir seleção.
        QSqlQuery query;
        QString nome = ui->tableWidget->item(linhaExclusao,0)->text();
        if(tipo == "P"){
            query.prepare("delete from produtos where nome='"+nome+"'");
            if(query.exec()){
                ui->tableWidget->removeRow(linhaExclusao);
            }
        }
        else if(tipo == "F"){
            query.prepare("delete from funcionarios where usuario='"+nome+"'");
            if(query.exec()){
                ui->tableWidget->removeRow(linhaExclusao);
                //    if(query.exec("select * from funcionarios where usuario='"+usuario+"' and senha='"+ senha+"' and funcao = '"+ "G"+"'")){ //Seleciona todos os usuários com o nome e senha digitados que sao iguais ao salvo no bd.

            }
        }
    }
    else{
        if(tipo == "P")
            QMessageBox::warning(this,"ERRO","A seleção do produto a ser excluído é obrigatória.");
        else if(tipo == "F")
            QMessageBox::warning(this,"ERRO","A seleção do usuário a ser excluído é obrigatória.");
    }
    bancoDados.QSqlDatabase::removeDatabase("QSQLITE"); //FECHA O BD.
}
