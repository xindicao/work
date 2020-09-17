#pragma once

#include <QtWidgets/QMainWindow>
#include <QString>

class MyCalculator
{
public:
    MyCalculator() {};
    virtual ~MyCalculator() {};
    virtual QString Calc(const char* exp) = 0;
};