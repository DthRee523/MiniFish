#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loginWindow = new LoginWindow(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getConnecedStatus(bool status)
{

}

