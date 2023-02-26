#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    usuario = "";
    senha = "";
    gerente = false;

    bancoDados = QSqlDatabase::addDatabase("QSQLITE");
    QString caminhoBD = QCoreApplication::applicationDirPath() + "/funcionarios.db";

    bancoDados.setDatabaseName(caminhoBD);
    if(!bancoDados.open()){
        QMessageBox::about(this,"Erro","Banco de dados não abriu.");
    }
}

void Login::dadosInvalidos(){
    ui->usuario_txt->setText("");
    ui->senha_txt->setText("");
    usuario = "";
    senha = "";
    ui->usuario_txt->setFocus();
    QMessageBox::warning(this,"Erro","Usuário ou senha incorretos.");
}

void Login::dadosValidos(){
    //Fechando a tela de login e abrindo o sistema.
    this->close();
    if(gerente)
        sistema = new Sistema(NULL, usuario, "G");
    else
        sistema = new Sistema(NULL, usuario, "F");
    bancoDados.QSqlDatabase::removeDatabase("QSQLITE");
    sistema->setWindowModality(Qt::ApplicationModal);
    sistema->show();
}

bool Login::verificaDados(){
    //Acesso ao banco de dados para confirmar o usuário e a senha..
    //Retorna se a senha é válida ou não.
    QSqlQuery query;
    if(query.exec("select * from funcionarios where usuario='"+usuario+"' and senha='"+ senha+"' and funcao = '"+ "G"+"'")){ //Seleciona todos os usuários com o nome e senha digitados que sao iguais ao salvo no bd.
        int i = 0;
        while(query.next()){
            i++;
            query.exec("SELECT name, salary FROM employee WHERE salary > 50000");
        }
        if(i > 0){
            gerente = true;
            return true;
        }
    }

    if(query.exec("select * from funcionarios where usuario='"+usuario+"' and senha='"+ senha+"' and funcao = '"+ "F"+"'")){ //Seleciona todos os usuários com o nome e senha digitados que sao iguais ao salvo no bd.
        int i = 0;
        while(query.next()){
            i++;
            query.exec("SELECT name, salary FROM employee WHERE salary > 50000");
        }
        if(i > 0){
            gerente = false;
            return true;
        }
    }
    return false;
}

Login::~Login()
{
    delete ui;
}


void Login::on_entrar_botao_clicked()
{
    usuario = ui->usuario_txt->text();
    senha = ui->senha_txt->text();

    if((ui->usuario_txt->text() == "")||(ui->senha_txt->text() == "")){
        QMessageBox::about(this,"Erro","O nome do usuário e a senha são obrigatórios para acessar o sistema.");
    }
    else{
        if(verificaDados())
            dadosValidos();
        else
            dadosInvalidos();
    }
}
