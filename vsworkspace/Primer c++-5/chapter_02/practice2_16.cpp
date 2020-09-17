#include <iostream>
/*
    此程序仅为了判断哪些赋值是合法的，执行了什么样的操作
 */
int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    r2 = 3.14159;       //合法，把3.14159赋值给r2绑定的对象d
    r2 = r1;            //合法，相当于d=i,把i的值赋给d
    i = r2;             //合法，相当于i=d
    r1 = d;             //合法，相当于i=d

    getchar();
    getchar();
    return 0;
}
