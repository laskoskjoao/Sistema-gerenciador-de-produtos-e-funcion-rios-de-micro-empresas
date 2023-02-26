/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *usuario;
    QLineEdit *usuario_txt;
    QHBoxLayout *horizontalLayout;
    QLabel *senha;
    QLineEdit *senha_txt;
    QPushButton *entrar_botao;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->setEnabled(true);
        Login->resize(200, 150);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        usuario = new QLabel(centralwidget);
        usuario->setObjectName(QString::fromUtf8("usuario"));

        horizontalLayout_2->addWidget(usuario);

        usuario_txt = new QLineEdit(centralwidget);
        usuario_txt->setObjectName(QString::fromUtf8("usuario_txt"));

        horizontalLayout_2->addWidget(usuario_txt);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        senha = new QLabel(centralwidget);
        senha->setObjectName(QString::fromUtf8("senha"));

        horizontalLayout->addWidget(senha);

        senha_txt = new QLineEdit(centralwidget);
        senha_txt->setObjectName(QString::fromUtf8("senha_txt"));
        senha_txt->setLayoutDirection(Qt::RightToLeft);
        senha_txt->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(senha_txt);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        entrar_botao = new QPushButton(centralwidget);
        entrar_botao->setObjectName(QString::fromUtf8("entrar_botao"));

        verticalLayout_2->addWidget(entrar_botao);


        verticalLayout_3->addLayout(verticalLayout_2);

        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 200, 21));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", nullptr));
        usuario->setText(QApplication::translate("Login", "Usu\303\241rio:", nullptr));
        senha->setText(QApplication::translate("Login", "Senha:  ", nullptr));
        entrar_botao->setText(QApplication::translate("Login", "Entrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
