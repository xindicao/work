#include <iostream>
using namespace std;
/*
    测试指针
 */
int main()
{
    int ival = 42;
    int *p = &ival;     //p存放着变量ival的地址，或者说p是指向变量ival的指针
    cout << *p;         //由符号*得到指针p所指的对象，输出 42

    *p = 0;             //由符号*得到指针p所指的对象，即可经由p为变量ival赋值
    cout << *p;         //输出 0

    getchar();
    getchar();
    return 0;
}