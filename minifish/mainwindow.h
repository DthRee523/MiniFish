/******************************************************************************
 * Copyright 2022 DthRee.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       mainwindow.h
 * @brief      MainWindow Widget
 *
 * @author     DthRee<liuhuan@dthree.cn>
 * @date       2022/04/03
 * @history
 *****************************************************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//QT Header
#include <QMainWindow>

//C++ Header
#include "loginwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void getConnecedStatus(bool status);

private:
    Ui::MainWindow *ui;
    LoginWindow *loginWindow;
};
#endif // MAINWINDOW_H
