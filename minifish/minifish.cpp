#include "minifish.h"
#include "ui_minifish.h"

MiniFish::MiniFish(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MiniFish)
{
    ui->setupUi(this);
}

MiniFish::~MiniFish()
{
    delete ui;
}

