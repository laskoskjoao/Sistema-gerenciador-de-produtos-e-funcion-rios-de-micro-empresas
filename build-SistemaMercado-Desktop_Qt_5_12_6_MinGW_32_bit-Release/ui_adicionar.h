/********************************************************************************
** Form generated from reading UI file 'adicionar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONAR_H
#define UI_ADICIONAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Adicionar
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QPushButton *botaoAdicionar;

    void setupUi(QWidget *Adicionar)
    {
        if (Adicionar->objectName().isEmpty())
            Adicionar->setObjectName(QString::fromUtf8("Adicionar"));
        Adicionar->resize(782, 501);
        horizontalLayout = new QHBoxLayout(Adicionar);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(Adicionar);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        lineEdit = new QLineEdit(Adicionar);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(Adicionar);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_2 = new QLineEdit(Adicionar);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(Adicionar);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_3 = new QLineEdit(Adicionar);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        comboBox = new QComboBox(Adicionar);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_3->addWidget(comboBox);


        horizontalLayout->addLayout(verticalLayout_3);

        botaoAdicionar = new QPushButton(Adicionar);
        botaoAdicionar->setObjectName(QString::fromUtf8("botaoAdicionar"));

        horizontalLayout->addWidget(botaoAdicionar);


        retranslateUi(Adicionar);

        QMetaObject::connectSlotsByName(Adicionar);
    } // setupUi

    void retranslateUi(QWidget *Adicionar)
    {
        Adicionar->setWindowTitle(QApplication::translate("Adicionar", "Form", nullptr));
        label->setText(QApplication::translate("Adicionar", "TextLabel          ", nullptr));
        label_2->setText(QApplication::translate("Adicionar", "TextLabel         ", nullptr));
        label_3->setText(QApplication::translate("Adicionar", "TextLabel         ", nullptr));
        comboBox->setItemText(0, QApplication::translate("Adicionar", "Funcion\303\241rio", nullptr));
        comboBox->setItemText(1, QApplication::translate("Adicionar", "Gerente", nullptr));

        botaoAdicionar->setText(QApplication::translate("Adicionar", "Adicionar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adicionar: public Ui_Adicionar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONAR_H
