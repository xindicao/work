/*统计输入中每个值连续出现了多少次 */

#include<iostream>
int main()
{
    //currVal是我们正在统计的数；我们将读入的新值存入val
    int currVal = 0, val = 0;
    //读取第一个数，并确保确实有数据可以处理
    std::cout << "Enter a few numbers, and we will count how many times each value appers in a row."
              <<std::endl;
    if (std::cin >> currVal)
    {
        int cnt = 1;                //保存我们正在处理的当前值的个数
        while  (std::cin>> val)  {  //读取剩余的数
            if (val == currVal) {   //如果值相同
                ++cnt;              //将cnt加1
            }            
            else {                  //否则，打印前一个值的个数
                std::cout << currVal << " occurs " 
                        << cnt << " times " << std::endl;
                currVal = val;      //记住新值
                cnt = 1;            //重置计数器
            }
        } //end while
        //记住打印文件中最后一个值的个数
        std::cout << currVal << " occurs "
                  << cnt << " times " << std::endl;
    } //endif
    getchar();
    getchar();
    return 0;
}