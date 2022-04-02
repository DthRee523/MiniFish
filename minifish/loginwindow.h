/******************************************************************************
 * Copyright 2022 DthRee.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       loginwindiw.h
 * @brief      LoginWindow Widget
 *
 * @author     DthRee<liuhuan@dthree.cn>
 * @date       2022/04/03
 * @history
 *****************************************************************************/
#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
