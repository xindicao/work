#pragma once
#include "MyCalculator.h"
#include <QString>
#include <QStack>

class CalculatorDec : public MyCalculator
{
public:
    CalculatorDec();
    ~CalculatorDec();
    QString Calc(const char *exp);

private:
    char Precade(char oper1, char oper2);
    bool IsOper(char c);
    bool isNum(char c);
};

