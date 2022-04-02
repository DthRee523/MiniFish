/**
 * Copyright (C) 2022 DthRee.
 * MiniFish LoginWindow Header File
 * Date: 2022.3.27
 * By:Dthree
 * Version: 1.0
 * The purpose of Mini Fish is to allow everyone to enjoy mess around time with their peers.
 * Geeks can enjoy the convenience brought by technology by building Mini Fish.
 * I'm DthRee, a mess around time what makes people happy at work!
 * Enjoy it! Just it! Do it! For it!
 *
 * 摸摸鱼的目的是让每个人都可以和同伴一起享受上班摸鱼的时光
 * 极客们可以通过打造摸摸鱼享受科技带来的便利。
 * 我是DthRe​​e，一个让人们在工作中快乐的摸鱼的发起者！
 * 去享受快乐！ 英文不好 上面是机翻内容
 */
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
