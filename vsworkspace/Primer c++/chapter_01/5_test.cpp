#include <iostream>
int main()
{
    int sum = 0, value = 0;
    //读取数据直到遇到文件尾，计算所有读入的值的和
    std::cout << "Please enter some numbers:" << std::endl;
    while(std::cin>>value){
         sum += value;
         if((value=getchar())=='\n')
             break; 
    }
    std::cout << "Sum is:" << sum;
    getchar();
    return 0;
}