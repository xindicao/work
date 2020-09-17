#include <iostream>
#include "Sales_item.h"

/*读取两个IBSN相同的Sales_item对象，输出他们的和 */
/*否则输出他们各自的值 */
int main()
{
    Sales_item item1, item2;
    std::cout << "Enter two Sales_item objects (ISBN, sold, price):"
              << std::endl;
    std::cin >> item1 >> item2;                 //读取一对交易记录
    std::cout << "ISBN           sold   price   revenue" << std::endl;
    if (item1.isbn==item2.isbn) {
        std::cout << item1 + item2 << std::endl;    //打印他们的和
    }
    else {
        std::cout << item1 << std::endl
                  << item2 << std::endl;
    }
    getchar();
    getchar();
    return 0;
}