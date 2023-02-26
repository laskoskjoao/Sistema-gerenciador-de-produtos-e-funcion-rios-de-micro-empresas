/********************************************************************************
** Form generated from reading UI file 'excluir.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCLUIR_H
#define UI_EXCLUIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Excluir
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;
    QPushButton *botaoExcluir;

    void setupUi(QWidget *Excluir)
    {
        if (Excluir->objectName().isEmpty())
            Excluir->setObjectName(QString::fromUtf8("Excluir"));
        Excluir->resize(782, 501);
        horizontalLayout_2 = new QHBoxLayout(Excluir);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableWidget = new QTableWidget(Excluir);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        horizontalLayout->addWidget(tableWidget);

        botaoExcluir = new QPushButton(Excluir);
        botaoExcluir->setObjectName(QString::fromUtf8("botaoExcluir"));

        horizontalLayout->addWidget(botaoExcluir);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Excluir);

        QMetaObject::connectSlotsByName(Excluir);
    } // setupUi

    void retranslateUi(QWidget *Excluir)
    {
        Excluir->setWindowTitle(QApplication::translate("Excluir", "Form", nullptr));
        botaoExcluir->setText(QApplication::translate("Excluir", "Excluir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Excluir: public Ui_Excluir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCLUIR_H
