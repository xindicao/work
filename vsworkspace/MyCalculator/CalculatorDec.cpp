#include "CalculatorDec.h"

CalculatorDec::CalculatorDec()
{
}

CalculatorDec::~CalculatorDec()
{
}

/*
优先级函数：
1.若oper1优先级高于oper2，返回'>'；等于或小于返回'<'；
2.若oper1和oper2都为‘=’，返回‘=’；
3.否则返回‘#’。
*/

char CalculatorDec::Precade(char oper1, char oper2)
{
    if (oper2 == '=' && oper1 == '=')
    {
        return '=';
    }
    const char priority[6][5] =
    {
        ' ', '+', '-', '*', '/',
        '+', '<', '<', '<', '<',
        '-', '<', '<', '<', '<',
        '*', '>', '>', '<', '>',
        '/', '>', '>', '>', '<',
        '=', '<', '<', '<', '<',
    };
    for (int i = 1; i < 6; i++)
    {
        if (priority[i][0] == oper1)
        {
            for (int j = 1; j < 5; j++)
            {
                if (priority[0][j] == oper2)
                {
                    return priority[i][j];
                }
            }
        }
    }
    return '#';
}

bool CalculatorDec::IsOper(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '=')
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool CalculatorDec::isNum(char c)
{
    if ((c > '0' || c == '0') && (c < '9' || c == '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

QString CalculatorDec::Calc(const char *exp)
{
    if (exp == NULL)
    {
        return "Expression is empty";
    }

    QStack<char> sOper;
    QStack<double> sNum;

    for (int i = 0; i < strlen(exp); i++)
    {
        if (isNum(exp[i])) {
            int temp = exp[i] - '0';
            if (i > 0 && isNum(exp[i - 1])) {
                double _temp = sNum.pop();
                temp = _temp * 10 + temp;
            }
            sNum.push(temp);
        }
        else if (IsOper(exp[i]))
        {
            char temp = exp[i];
            if (sOper.empty())
            {
                sOper.push(temp);
            }
            else
            {
                int flag = 1;
                while (!sOper.empty() && flag)
                {
                    switch (Precade(temp, sOper.top()))
                    {
                    case '>':
                        sOper.push(temp);
                        flag = 0;
                        break;
                    case '<':
                    {
                        if (sNum.size() < 2)
                        {
                            flag = 0;
                            continue;
                        }
                        double num1 = sNum.pop();
                        double num2 = sNum.pop();
                        switch (sOper.pop())
                        {
                        case '+':
                            num2 += num1;
                            break;
                        case '-':
                            num2 = num2 - num1;
                            break;
                        case '*':
                            num2 = num2 * num1;
                            break;
                        case '/':
                            if (num1 == 0)
                            {
                                return "Error: Divisor cannot be 0";
                            }
                            else
                            {
                                num2 = num2 / num1;
                            }
                            break;
                        default:
                            return "Error: The expression is wrong";
                        }
                        sNum.push(num2);
                        if (sOper.empty())
                        {
                            sOper.push(temp);
                        }
                        break;
                    }
                    case '=':
                        sOper.pop();
                        flag = 0;
                        break;
                    default:
                        return "Error: The expression is wrong";
                        break;
                    }
                }
            }
        }
    }
    if ((sOper.size() == 1 && sOper.top() == '=') || sOper.empty())
    {
        if (!sNum.empty())
        {
            return QString::number(sNum.top(), 10, 6);
        }
    }
    return "Error";
}