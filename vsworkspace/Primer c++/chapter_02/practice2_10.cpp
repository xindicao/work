#include <iostream>
/*
    以下变量的初值分别是什么
 */

std::string global_str;
int global_int;

int main()
{
    int local_int;
    std::string local_str;

    std::cout << "global_str: " << global_str << std::endl;     //空字符串“”
    std::cout << "global_int: " << global_int << std::endl;     //0
    std::cout << "local_str: " << local_str << std::endl;       //空字符串“”
    std::cout << "local_int: " << local_int << std::endl;       //未初始化

    getchar();
    getchar();
    return 0;
}