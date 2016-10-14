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
   if(ui->pwEdit->text().trimmed() == "YugeO")
   {
       isValid = true;
   }
   ui->pwEdit->clear();

    this->close();
}

void Login::on_buttonBox_rejected()
{
    isValid = false;
     ui->pwEdit->clear();
    this->close();
}
bool Login::getValid()
{
    if(isValid)
    {
        isValid = false;
        return true;
    }
    else
    {
        return false;
    }
}
