/******************************************************************************
 * Copyright 2022 DthRee.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       minifish.h
 * @brief      Main Function
 *
 * @author     DthRee<liuhuan@dthree.cn>
 * @date       2022/04/03
 * @history
 *****************************************************************************/
#ifndef MINIFISH_H
#define MINIFISH_H

#include <QApplication>
#include <QMainWindow>
#include <QString>
#include <QTimer>
#include <QDebug>
#include <QThread>

#define QT_MAIN_APPLICATION \
    int main(int argc, char *argv[]) \
    { \
        QApplication a(argc, argv);\
        MiniFish w; \
        w.show(); \
        return a.exec(); \
    }

QT_BEGIN_NAMESPACE
namespace Ui { class MiniFish; }
QT_END_NAMESPACE

class MiniFish : public QMainWindow
{
    Q_OBJECT

public:
    MiniFish(QWidget *parent = nullptr);
    ~MiniFish();

    void changeMainWindow();

private slots:
    void on_connect_btn_clicked();

private:
    Ui::MiniFish *ui;
    QString WindowTitle = "MiniFish-";
};
#endif // MINIFISH_H
