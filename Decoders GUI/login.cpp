#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    isValid = false;
}

Login::~Login()
{
    delete ui;
}

void Login::on_buttonBox_accepted()
{
    //set isValid to true
}

void Login::on_buttonBox_rejected()
{

}
bool Login::getValid()
{
    return isValid;
}
