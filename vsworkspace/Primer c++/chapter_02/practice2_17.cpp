#include <iostream>
/*
    执行代码查看输出结果
 */
int main()
{
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << " " << ri << std::endl;   //输出 10 10

    getchar();
    getchar();
    return 0;
}