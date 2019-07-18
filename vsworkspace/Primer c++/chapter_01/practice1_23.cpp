#include <iostream>
#include "Sales_item.h"

/*读取多条销售记录，统计每个ISBN有几条销售记录 */
int main()
{
    Sales_item total;   //保存下一条交易记录的变量
    std::cout << "Enter a few Sales_item objects (ISBN, sold, price):" 
              << std::endl;
    //读入第一条交易记录，并确保有数据可以处理
    if (std::cin >> total) {
        Sales_item trans;           //保存和的变量
        //读入并处理剩余交易记录
        while(std::cin >> trans) {
            //如果仍在处理相同的书
            if (total.isbn==trans.isbn) {
                total += trans;     //更新销售总额
            }
            else {
                //打印前一本书的结果
                std::cout << "ISBN    sold   price   revenue" 
                          << std::endl;
                std::cout << total << std::endl;
                total = trans;      //total现在表示下一本书的销售额
            }   //endif
        }   //endwhile
        std::cout << total << std::endl;    //打印最后一本书的结果 
    }
    else {
        //没有输入！警告
        std::cerr << "No dara?!" << std::endl;
        return -1;  //表示失败
    }
    getchar();
    getchar();
    return 0;
}