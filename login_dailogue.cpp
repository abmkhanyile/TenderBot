#include "login_dailogue.h"
#include "ui_login_dailogue.h"

Login_dailogue::Login_dailogue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_dailogue)
{
    ui->setupUi(this);
    setFixedSize(this->width(), this->height());
}

Login_dailogue::~Login_dailogue()
{
    delete ui;
}
