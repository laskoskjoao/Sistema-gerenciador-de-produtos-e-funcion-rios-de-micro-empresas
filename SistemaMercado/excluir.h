#ifndef EXCLUIR_H
#define EXCLUIR_H

#include <QWidget>
#include <QMessageBox>
#include <QtSql>

namespace Ui {
class Excluir;
}

class Excluir : public QWidget
{
    Q_OBJECT

public:
    explicit Excluir(QWidget *parent = nullptr, QString tipoP = " ");
    ~Excluir();

private slots:
    void on_botaoExcluir_clicked();

private:
    Ui::Excluir *ui;
    QString tipo;
    QSqlDatabase bancoDados;
};

#endif // EXCLUIR_H
