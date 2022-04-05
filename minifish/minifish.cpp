#include "minifish.h"
#include "ui_minifish.h"


minifish::minifish(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::minifish) {
    ui->setupUi(this);

    //窗口初始化
    this->setMinimumSize(800, 600);
    this->setMaximumSize(800, 600);
    this->setWindowTitle("MiniFish-" + windowTitle);
    //this->setWindowFlags(Qt::FramelessWindowHint | windowFlags()); //设置窗口无边框
    this->setTabOrder(ui->ip_line, ui->port_line); //tab
    this->setTabOrder(ui->port_line, ui->name_line);


    //调用类初始化
    networkSubThread = new QThread;
    netWork = new NetWork;
    netWork->moveToThread(networkSubThread);
    networkSubThread->start();
    time = QTime::currentTime();
    cur_text_color = ui->chat_edit->textColor();

    //组件初始化
    ui->disConnect_btn->setEnabled(false);
    ui->ip_line->setFocus(Qt::ActiveWindowFocusReason); //default
    ui->chat_edit->setReadOnly(true);
    ui->chat_edit->setTextColor(Qt::red);
    ui->chat_edit->append("[" + time.toString("hh:mm:ss") + "]System: Welcome to MiniFish!");
    ui->chat_edit->setTextColor(cur_text_color);



    //QT连接
    connect(ui->connect_btn, &QPushButton::clicked, this, [=]{
        if (ui->port_line->text().isEmpty())
        {
            netWork->_connectToHost(ui->ip_line->text(), port);
        }
        else
        {
            netWork->_connectToHost(ui->ip_line->text(), ui->port_line->text().toUInt());
        }
        connect(netWork, &NetWork::connectStatus, this , [=]{//连接成功时
            qDebug() << "接收成功！";
            setDisEdit();
            windowTitle = ui->ip_line->text() + " " + ui->name_line->text();
            this->setWindowTitle(windowTitle);
        });
    });
    connect(ui->disConnect_btn, &QPushButton::clicked, this, [=]{
        netWork->disConnect();
        setEdit();
    });
}

minifish::~minifish() {
    delete netWork;
    delete ui;
}

void minifish::setDisEdit()
{
    ui->ip_line->setEnabled(false);
    ui->port_line->setEnabled(false);
    ui->name_line->setEnabled(false);
    ui->add_btn->setEnabled(false);
    ui->connect_btn->setEnabled(false);
    ui->disConnect_btn->setEnabled(true);
    ui->chat_edit->setTextColor(Qt::green);
    time = QTime::currentTime();
    ui->chat_edit->append("[" + time.toString("hh:mm:ss") + "]System: Connect to " + ui->ip_line->text() + " Success!");
    ui->chat_edit->setTextColor(cur_text_color);
}

void minifish::setEdit()
{
    ui->ip_line->setEnabled(true);
    ui->port_line->setEnabled(true);
    ui->name_line->setEnabled(true);
    ui->add_btn->setEnabled(true);
    ui->connect_btn->setEnabled(true);
    ui->disConnect_btn->setEnabled(false);
    ui->chat_edit->setTextColor(Qt::red);
    time = QTime::currentTime();
    ui->chat_edit->append("[" + time.toString("hh:mm:ss") + "]System: Disconnect from Server!");
    ui->chat_edit->setTextColor(cur_text_color);
}

