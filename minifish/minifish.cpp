#include "minifish.h"
#include "ui_minifish.h"

MiniFish::MiniFish(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MiniFish)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->ip_line->setEditable(true);
    ui->ip_line->setFocus();

    this->setTabOrder(ui->ip_line, ui->name_line);
    this->setWindowTitle(WindowTitle + "Login");
    this->setMinimumSize(800, 600);
    this->setMaximumSize(800, 600);
}

MiniFish::~MiniFish()
{
    delete ui;
}


void MiniFish::on_connect_btn_clicked()
{
    if (ui->ip_line->currentText().isEmpty() || ui->name_line->text().isEmpty())
    {
        ui->tip_lab->setText("IP或昵称不能为空！");
        QTimer::singleShot(3000,ui->tip_lab, [=]{ ui->tip_lab->setText(""); });//定时清理 1s
    }
    else
    {
        //执行网络连接
        qDebug() << "执行网络连接";
    }
}

void MiniFish::changeMainWindow()
{
    ui->stackedWidget->setCurrentIndex(1);
}
