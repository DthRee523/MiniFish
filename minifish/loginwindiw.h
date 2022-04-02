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
#ifndef LOGINWINDIW_H
#define LOGINWINDIW_H

#include <QWidget>

namespace Ui {
class LoginWindiw;
}

class LoginWindiw : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindiw(QWidget *parent = nullptr);
    ~LoginWindiw();

private:
    Ui::LoginWindiw *ui;
};

#endif // LOGINWINDIW_H
