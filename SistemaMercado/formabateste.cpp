#include "formabateste.h"
#include "ui_formabateste.h"

FormAbaTeste::FormAbaTeste(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAbaTeste)
{
    ui->setupUi(this);
}

FormAbaTeste::~FormAbaTeste()
{
    delete ui;
}
