#include <iostream>
/*
    用专一序列编写程序，要求先输入2M转到新一行，
    修改程序使其先输出2,然后输出制表符，再输出M，最后转到新一行 
*/
int main()
{
    std::cout << "2\x4d\n";
    std::cout << "2\t\x4d\n";

    getchar();
    getchar();
    return 0;
}