#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("MiniFish By:DthRee");
    this->resize(1200, 800);//set Window Size
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

