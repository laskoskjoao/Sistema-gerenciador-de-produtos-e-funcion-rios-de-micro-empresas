#include "procurar.h"
#include "ui_procurar.h"

Procurar::Procurar(QWidget *parent, QString tipoP) :
    QWidget(parent),
    ui(new Ui::Procurar)
{
    ui->setupUi(this);
    tipo = tipoP;
}

Procurar::~Procurar()
{
    delete ui;
}

void Procurar::informaResultados(){
    /*(Banco de Dados) Acesso ao banco de dados para encontrar o produto
    Após encontrar, retorna na lista os dados como nome, preço e localização.*/

    if(ui->campoProcura->text() != ""){
        if(tipo == "P"){
            bancoDados = QSqlDatabase::addDatabase("QSQLITE");
            QString caminhoBD = QCoreApplication::applicationDirPath() + "/produtos.db";
            bancoDados.setDatabaseName(caminhoBD);
            bancoDados.open();

            QSqlQuery query;
            query.prepare("select * from produtos where nome='"+ui->campoProcura->text()+"'");

            ui->tableWidget->removeRow(0);//Apaga o resultado anterior.

            if(query.exec()){
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
                    ui->tableWidget->setStyleSheet("QTableView {selection-background-color:blue}");
                }
            }
        }
        else if(tipo == "F"){
            bancoDados = QSqlDatabase::addDatabase("QSQLITE");
            QString caminhoBD = QCoreApplication::applicationDirPath() + "/funcionarios.db";
            bancoDados.setDatabaseName(caminhoBD);
            bancoDados.open();

            QSqlQuery query;
            query.prepare("select * from funcionarios where usuario='"+ui->campoProcura->text()+"'");

            ui->tableWidget->removeRow(0);//Apaga o resultado anterior.

            if(query.exec()){
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
                    ui->tableWidget->setStyleSheet("QTableView {selection-background-color:blue}");
                }
            }
        }
        bancoDados.QSqlDatabase::removeDatabase("QSQLITE"); //FECHA O BD.
    }
    else{
        if(tipo == "P")
            QMessageBox::warning(this,"ERRO", "O nome do produto é obrigatório para realizar a pesquisa.");
        else if(tipo == "F")
            QMessageBox::warning(this,"ERRO", "O nome do funcionário é obrigatório para realizar a pesquisa.");
    }
}

void Procurar::on_botaoProcurar_clicked()
{
    informaResultados();
}
