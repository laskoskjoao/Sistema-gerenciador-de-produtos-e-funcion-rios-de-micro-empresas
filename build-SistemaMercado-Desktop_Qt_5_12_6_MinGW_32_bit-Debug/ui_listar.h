/********************************************************************************
** Form generated from reading UI file 'listar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAR_H
#define UI_LISTAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Listar
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Listar)
    {
        if (Listar->objectName().isEmpty())
            Listar->setObjectName(QString::fromUtf8("Listar"));
        Listar->resize(782, 501);
        verticalLayout = new QVBoxLayout(Listar);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(Listar);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(Listar);

        QMetaObject::connectSlotsByName(Listar);
    } // setupUi

    void retranslateUi(QWidget *Listar)
    {
        Listar->setWindowTitle(QApplication::translate("Listar", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Listar: public Ui_Listar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAR_H
