#include "listar.h"
#include "ui_listar.h"

Listar::Listar(QWidget *parent, QString tipoP) :
    QWidget(parent),
    ui(new Ui::Listar)
{
    ui->setupUi(this);
    tipo = tipoP;
    informaResultados();
}

Listar::~Listar()
{
    delete ui;
}

void Listar::informaResultados(){
    //(Banco de dados): Baseado no tipo(Funcionário ou produto), acessa o banco de dados certo e lista os elementos com as características(ex: Funcionário: nome, salário e função e Produto: nome, preço e localização).
    bancoDados = QSqlDatabase::addDatabase("QSQLITE");  //ADICIONA UM BD.
    if(tipo == "P"){
        QString caminhoBD = QCoreApplication::applicationDirPath() + "/produtos.db";
        //Lista os produtos
        bancoDados.setDatabaseName(caminhoBD);
        bancoDados.open();
        QSqlQuery query;
        query.prepare("select * from produtos");
        if(query.exec()){
            int linha = 0;
            ui->tableWidget->setColumnCount(3);
            while(query.next()){
                qDebug("teste");
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
    else if(tipo == "F"){
        QString caminhoBD = QCoreApplication::applicationDirPath() + "/funcionarios.db";
        //Lista os funcionários
        bancoDados.setDatabaseName(caminhoBD);
        bancoDados.open();
        QSqlQuery query;
        query.prepare("select * from funcionarios");
        if(query.exec()){
            int linha = 0;
            ui->tableWidget->setColumnCount(4);
            while(query.next()){
                qDebug("teste");
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
    bancoDados.QSqlDatabase::removeDatabase("QSQLITE"); //FECHA O BD.
}
