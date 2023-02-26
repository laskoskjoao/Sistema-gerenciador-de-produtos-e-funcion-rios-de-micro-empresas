/********************************************************************************
** Form generated from reading UI file 'sistema.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SISTEMA_H
#define UI_SISTEMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sistema
{
public:
    QAction *actionAdicionar_Produto;
    QAction *actionExcluir_Produto;
    QAction *actionListar_Produtos;
    QAction *actionProcurar_Produtos;
    QAction *actionExcluir_Funcion_rio;
    QAction *actionListar_Funcion_rio;
    QAction *actionProcurar_Funcion_rio;
    QAction *actionSair;
    QAction *actionGerenciar_Produtos;
    QAction *actionGerenciar_Funcionarios;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *usuario_txt;
    QLabel *funcao_txt;
    QTabWidget *tabWidget;
    QMenuBar *menubar;
    QMenu *menuProdutos;
    QMenu *menuFuncionarios;
    QMenu *menuOp_es;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Sistema)
    {
        if (Sistema->objectName().isEmpty())
            Sistema->setObjectName(QString::fromUtf8("Sistema"));
        Sistema->resize(800, 600);
        actionAdicionar_Produto = new QAction(Sistema);
        actionAdicionar_Produto->setObjectName(QString::fromUtf8("actionAdicionar_Produto"));
        actionExcluir_Produto = new QAction(Sistema);
        actionExcluir_Produto->setObjectName(QString::fromUtf8("actionExcluir_Produto"));
        actionListar_Produtos = new QAction(Sistema);
        actionListar_Produtos->setObjectName(QString::fromUtf8("actionListar_Produtos"));
        actionProcurar_Produtos = new QAction(Sistema);
        actionProcurar_Produtos->setObjectName(QString::fromUtf8("actionProcurar_Produtos"));
        actionExcluir_Funcion_rio = new QAction(Sistema);
        actionExcluir_Funcion_rio->setObjectName(QString::fromUtf8("actionExcluir_Funcion_rio"));
        actionListar_Funcion_rio = new QAction(Sistema);
        actionListar_Funcion_rio->setObjectName(QString::fromUtf8("actionListar_Funcion_rio"));
        actionProcurar_Funcion_rio = new QAction(Sistema);
        actionProcurar_Funcion_rio->setObjectName(QString::fromUtf8("actionProcurar_Funcion_rio"));
        actionSair = new QAction(Sistema);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionGerenciar_Produtos = new QAction(Sistema);
        actionGerenciar_Produtos->setObjectName(QString::fromUtf8("actionGerenciar_Produtos"));
        actionGerenciar_Funcionarios = new QAction(Sistema);
        actionGerenciar_Funcionarios->setObjectName(QString::fromUtf8("actionGerenciar_Funcionarios"));
        centralwidget = new QWidget(Sistema);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        usuario_txt = new QLabel(centralwidget);
        usuario_txt->setObjectName(QString::fromUtf8("usuario_txt"));

        verticalLayout->addWidget(usuario_txt);

        funcao_txt = new QLabel(centralwidget);
        funcao_txt->setObjectName(QString::fromUtf8("funcao_txt"));

        verticalLayout->addWidget(funcao_txt);


        verticalLayout_2->addLayout(verticalLayout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));

        verticalLayout_2->addWidget(tabWidget);

        Sistema->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Sistema);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuProdutos = new QMenu(menubar);
        menuProdutos->setObjectName(QString::fromUtf8("menuProdutos"));
        menuProdutos->setEnabled(true);
        menuFuncionarios = new QMenu(menubar);
        menuFuncionarios->setObjectName(QString::fromUtf8("menuFuncionarios"));
        menuOp_es = new QMenu(menubar);
        menuOp_es->setObjectName(QString::fromUtf8("menuOp_es"));
        Sistema->setMenuBar(menubar);
        statusbar = new QStatusBar(Sistema);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Sistema->setStatusBar(statusbar);

        menubar->addAction(menuProdutos->menuAction());
        menubar->addAction(menuFuncionarios->menuAction());
        menubar->addAction(menuOp_es->menuAction());
        menuProdutos->addAction(actionGerenciar_Produtos);
        menuFuncionarios->addAction(actionGerenciar_Funcionarios);
        menuOp_es->addAction(actionSair);

        retranslateUi(Sistema);

        QMetaObject::connectSlotsByName(Sistema);
    } // setupUi

    void retranslateUi(QMainWindow *Sistema)
    {
        Sistema->setWindowTitle(QApplication::translate("Sistema", "MainWindow", nullptr));
        actionAdicionar_Produto->setText(QApplication::translate("Sistema", "Cadastrar Produto", nullptr));
        actionExcluir_Produto->setText(QApplication::translate("Sistema", "Excluir Produto", nullptr));
        actionListar_Produtos->setText(QApplication::translate("Sistema", "Listar Produtos", nullptr));
        actionProcurar_Produtos->setText(QApplication::translate("Sistema", "Procurar Produtos", nullptr));
        actionExcluir_Funcion_rio->setText(QApplication::translate("Sistema", "Excluir Funcion\303\241rio", nullptr));
        actionListar_Funcion_rio->setText(QApplication::translate("Sistema", "Listar Funcion\303\241rio", nullptr));
        actionProcurar_Funcion_rio->setText(QApplication::translate("Sistema", "Procurar Funcion\303\241rio", nullptr));
        actionSair->setText(QApplication::translate("Sistema", "Sair", nullptr));
        actionGerenciar_Produtos->setText(QApplication::translate("Sistema", "Gerenciar Produtos", nullptr));
        actionGerenciar_Funcionarios->setText(QApplication::translate("Sistema", "Gerenciar Funcion\303\241rios", nullptr));
        usuario_txt->setText(QString());
        funcao_txt->setText(QString());
        menuProdutos->setTitle(QApplication::translate("Sistema", "Produtos", nullptr));
        menuFuncionarios->setTitle(QApplication::translate("Sistema", "Funcion\303\241rios", nullptr));
        menuOp_es->setTitle(QApplication::translate("Sistema", "Op\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sistema: public Ui_Sistema {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SISTEMA_H
