#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <sistema.h>
#include <QMessageBox>
#include <QtSql>
#include <QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    void dadosInvalidos();
    void dadosValidos();
    bool verificaDados();
    ~Login();

private slots:
    void on_entrar_botao_clicked();

private:
    Ui::Login *ui;
    QString usuario;
    QString senha;
    Sistema* sistema;
    QSqlDatabase bancoDados;
    bool gerente;
};
#endif // LOGIN_H
