#include "loginwindiw.h"
#include "ui_loginwindiw.h"

LoginWindiw::LoginWindiw(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWindiw)
{
    ui->setupUi(this);
}

LoginWindiw::~LoginWindiw()
{
    delete ui;
}
