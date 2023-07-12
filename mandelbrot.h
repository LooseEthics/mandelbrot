#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mandelbrot.h"

class mandelbrot : public QMainWindow
{
    Q_OBJECT

public:
    mandelbrot(QWidget *parent = nullptr);
    ~mandelbrot();

private:
    Ui::mandelbrotClass ui;
};
