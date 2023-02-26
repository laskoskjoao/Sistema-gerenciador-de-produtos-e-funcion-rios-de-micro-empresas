/********************************************************************************
** Form generated from reading UI file 'procurar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCURAR_H
#define UI_PROCURAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Procurar
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *campoProcura;
    QPushButton *botaoProcurar;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Procurar)
    {
        if (Procurar->objectName().isEmpty())
            Procurar->setObjectName(QString::fromUtf8("Procurar"));
        Procurar->resize(782, 501);
        horizontalLayout_2 = new QHBoxLayout(Procurar);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        campoProcura = new QLineEdit(Procurar);
        campoProcura->setObjectName(QString::fromUtf8("campoProcura"));

        horizontalLayout->addWidget(campoProcura);

        botaoProcurar = new QPushButton(Procurar);
        botaoProcurar->setObjectName(QString::fromUtf8("botaoProcurar"));

        horizontalLayout->addWidget(botaoProcurar);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(Procurar);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(Procurar);

        QMetaObject::connectSlotsByName(Procurar);
    } // setupUi

    void retranslateUi(QWidget *Procurar)
    {
        Procurar->setWindowTitle(QApplication::translate("Procurar", "Form", nullptr));
        botaoProcurar->setText(QApplication::translate("Procurar", "Procurar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Procurar: public Ui_Procurar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCURAR_H
