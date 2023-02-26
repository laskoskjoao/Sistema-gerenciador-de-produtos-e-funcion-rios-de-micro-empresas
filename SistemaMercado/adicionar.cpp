#include "adicionar.h"
#include "ui_adicionar.h"

Adicionar::Adicionar(QWidget *parent,  QString tipoP) :
    QWidget(parent),
    ui(new Ui::Adicionar)
{
    ui->setupUi(this);
    //Constroi a janela de acordo com o tipo(Funcionário ou produto)
    /*Ideia de construção: Os campos são gerados tanto para adicionar um produto, quanto um funcionário, porém, como
    para adicionar um funcionário existem mais elementos gráficos, quando for adicionar um produto esses elementos são
    removidos.*/

    tipo = tipoP;

    bancoDados = QSqlDatabase::addDatabase("QSQLITE");  //ADICIONA UM BD.
    if(tipo == "P"){
        QString caminhoBD = QCoreApplication::applicationDirPath() + "/produtos.db";
        bancoDados.setDatabaseName(caminhoBD);
        ui->label->setText("Nome:          ");
        ui->label_2->setText("Preço:          ");
        ui->label_3->setText("Localização: ");
        ui->comboBox->~QComboBox();             //Deleta, pois não é necessário para adicionar Produtos.
    }
    else if(tipo == "F"){
        QString caminhoBD = QCoreApplication::applicationDirPath() + "/funcionarios.db";
        bancoDados.setDatabaseName(caminhoBD);
        ui->label->setText("Nome:    ");
        ui->label_2->setText("Senha:   ");
        ui->label_3->setText("Salário:  ");
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    }
    else{
        //ERRO: AS OPÇÕES PARA ADICIONAR SÃO FUNCIONARIO OU PRODUTO.
    }
    bancoDados.open();
}

Adicionar::~Adicionar()
{
    delete ui;
}

void Adicionar::on_botaoAdicionar_clicked()
{
    QSqlQuery query;
    //(banco de dados)NESSA PARTE DO CÓDIGO, SE PEGA O CONTEUDO DOS CAMPOS E ADICIONA AO RESPECTIVO BANCO DE DADOS, SE O TIPO FOR FUNCIONÁRIO SE ADICIONA NO BD FUNCIONARIO, CASO CONTRARIO NO BD PRODUTO.
    if(tipo == "P"){
        if(ui->lineEdit->text()== "")
            QMessageBox::about(this, "Erro", "O nome do produto é obrigatório para realizar o cadastro.");
        else{
            qDebug("a");
            query.prepare("insert into produtos (nome,preco,localizacao) values""('"+ui->lineEdit->text()+"','"+ui->lineEdit_2->text()+"','"+ui->lineEdit_3->text()+"')");
            qDebug("b");
        }
    }
    else if(tipo == "F"){
        if((ui->lineEdit->text()== "")||(ui->lineEdit_2->text() == "")){
            QMessageBox::about(this, "Erro", "O nome do usuário e a senha são obrigatórios para realizar o cadastro.");
        }
        else{
            if(ui->comboBox->currentText() == "Gerente")
                query.prepare("insert into funcionarios (usuario,senha,salario,funcao) values""('"+ui->lineEdit->text()+"','"+ui->lineEdit_2->text()+"','"+ui->lineEdit_3->text()+"','"+"G"+"')");
            else
                query.prepare("insert into funcionarios (usuario,senha,salario,funcao) values""('"+ui->lineEdit->text()+"','"+ui->lineEdit_2->text()+"','"+ui->lineEdit_3->text()+"','"+"F"+"')");
        }
    }
    query.exec();
    bancoDados.QSqlDatabase::removeDatabase("QSQLITE"); //FECHA O BD.
}
