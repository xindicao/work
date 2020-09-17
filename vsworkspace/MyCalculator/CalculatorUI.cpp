#include "CalculatorUI.h"
#include "CalculatorDec.h"

int CalculatorUI::clear = 0;

CalculatorUI::CalculatorUI() : QWidget(NULL, Qt::WindowCloseButtonHint)
{
}

CalculatorUI::~CalculatorUI()
{
    deInit();
}

CalculatorUI* CalculatorUI::instance()
{
    CalculatorUI* calcUI = new CalculatorUI();
    if (NULL == calcUI)
    {
        return NULL;
    }
    if (!calcUI->init())
    {
        delete calcUI;
        calcUI = NULL;
    }
    return calcUI;
}

void CalculatorUI::show()
{
    QWidget::show();
    this->setFixedSize(this->width(), this->height());
}

bool CalculatorUI::init()
{
    bool ret = true;

    mEdit = new QLineEdit(this);
    if (mEdit == NULL)
    {
        ret = false;
        return ret;
    }
    mEdit->move(10, 10);
    mEdit->resize(190, 30);
    mEdit->setReadOnly(true);

    const char* mButtontext[16] =
    {
        "0", "1", "2", "3",
        "4", "5", "6", "7",
        "8", "9", "+", "-",
        "*", "/", "=", "c",
    };
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mButton[4 * i + j] = new QPushButton(this);
            if (mButton[4 * i + j] == NULL)
            {
                ret = false;
                return ret;
            }
            mButton[4 * i + j]->move(10 + (10 + 40) * j, 50 + (10 + 40) * i);
            mButton[4 * i + j]->resize(40, 40);
            mButton[4 * i + j]->setText(mButtontext[4 * i + j]);
            QObject::connect(mButton[4 * i + j], SIGNAL(clicked()), this, SLOT(onButtonClicked()));
        }
    }
    mCalc = new CalculatorDec();
    if (NULL == mCalc)
    {
        ret = false;
    }

    return ret;
}

void CalculatorUI::deInit()
{
    if (mEdit != NULL)
    {
        delete mEdit;
        mEdit = NULL;
    }
    for (int i = 0; i < 16; ++i)
    {
        if (mButton[i] != NULL)
        {
            delete mButton;
            mButton[i] = NULL;
        }
    }
    if (mCalc != NULL)
    {
        delete mCalc;
        mCalc = NULL;
    }
}

/*
1.连续符号只取最后一个，例如1+-*2同1*2,结果为2；
2.+2，2+同2；
3.按“=”号之后显示结果；
*/

void CalculatorUI::onButtonClicked()
{
    QPushButton* btn = dynamic_cast<QPushButton*>(sender());
    QString exp = mEdit->text();
    QString text = btn->text();

    if (clear)
    {
        mEdit->setText("");
        exp.clear();
        clear = 0;
    }
    if (text >= "0" && text <= "9")
    {
        exp += text;
    }
    else if (text == "+" || text == "-" || text == "*" || text == "/")
    {
        if (!exp.isEmpty())
        {
            QString tmp = exp.right(1);
            if (tmp[0] == '+' || tmp[0] == '-' || tmp[0] == '*' || tmp[0] == '/')
            {
                exp = exp.left(exp.size() - 1);
            }
            exp += text;
        }
    }
    else if (text == "c")
    {
        exp.clear();
    }
    else if (text == "=" && exp.length())
    {
        QString tmp = exp.right(1);
        if (tmp[0] == '+' || tmp[0] == '-' || tmp[0] == '*' || tmp[0] == '/')
        {
            exp = exp.left(exp.size() - 1);
        }
        exp += text;

        QByteArray ba = exp.toLatin1();
        char* ch = ba.data();
        QString ret = mCalc->Calc(ch);
        exp += ret;
        clear = 1;
    }
    mEdit->setText(exp);
}