#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->setMinimumSize(400, 600);
    this->setMaximumSize(400, 600);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}
