#include <iostream>
int main()
{
    //分多行书写的自妇产字面值
    std::cout << "a really, really long string literal "
                 "that spans two lines"
              << std::endl;
    std::cout << '\n';              //转到新一行
    std::cout << "\tHi!\n";         //输出一个制表符，输出“Hi!”，转到新一行
    std::cout << "Hi \x4dO\115!\n";     //输出 Hi MOM!，转到新一行
    std::cout << '\115' << '\n';        //输出M，转到新一行

    getchar();
    getchar();
    return 0;
}