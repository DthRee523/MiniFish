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

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MiniFish; }
QT_END_NAMESPACE

class MiniFish : public QMainWindow
{
    Q_OBJECT

public:
    MiniFish(QWidget *parent = nullptr);
    ~MiniFish();

private:
    Ui::MiniFish *ui;
};
#endif // MINIFISH_H
