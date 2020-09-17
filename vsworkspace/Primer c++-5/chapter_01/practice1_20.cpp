#include <iostream>
#include "Sales_item.h"

/*读取并打印每条销售记录 */
int main(int argc, char const *argv[])
{
    Sales_item book;
    std::cout << "Enter transactions:" << std::endl;
    while(std::cin >> book){
        std::cout << "ISBN          sold   price   revenue" << std::endl;
        std::cout << book << std::endl;
    }
    return 0;
}