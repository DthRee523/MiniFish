#ifndef MINIFISH_MINIFISH_H
#define MINIFISH_MINIFISH_H

//QT Header
#include <QMainWindow>
#include <QApplication>
#include <QDebug>
#include <QString>
#include <QThread>
#include <QTime>

//C++ Header
#include "NetWork.h"

#define QT_MAIN_FUNCTION \
        int main(int argc, char *argv[]) \
        {\
            QApplication a(argc, argv);  \
            minifish m;  \
            m.show(); \
            return a.exec();\
        }

QT_BEGIN_NAMESPACE
namespace Ui { class minifish; }
QT_END_NAMESPACE

class minifish : public QMainWindow {
Q_OBJECT

public:
    explicit minifish(QWidget *parent = nullptr);

    void setDisEdit();  //设置上方组件不可操作

    void setEdit();

    ~minifish() override;

private:
    Ui::minifish *ui;
    QThread *networkSubThread;
    NetWork *netWork;
    QTime time;
    QColor cur_text_color;

    QString windowTitle = "未连接";
    int port = 4426;//default port


signals:
    void disConnect();
};


#endif //MINIFISH_MINIFISH_H
