#include "CalculatorUI.h"
#include <QtWidgets/QApplication>
#include <QLineEdit>
#include <QPushButton>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    CalculatorUI* widget = CalculatorUI::instance();
    int ret = 0;
    if (widget != NULL)
    {
        widget->show();
        ret = a.exec();
        delete widget;
    }

    return ret;
}
