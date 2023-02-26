#ifndef FORMABATESTE_H
#define FORMABATESTE_H

#include <QWidget>

namespace Ui {
class FormAbaTeste;
}

class FormAbaTeste : public QWidget
{
    Q_OBJECT

public:
    explicit FormAbaTeste(QWidget *parent = nullptr);
    ~FormAbaTeste();

private:
    Ui::FormAbaTeste *ui;
};

#endif // FORMABATESTE_H
