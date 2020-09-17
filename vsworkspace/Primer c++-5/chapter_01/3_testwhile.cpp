#include<iostream>
int main()
{
//    int sum = 0;
    int val = 10;
    //只要val的值小于等于10，while循环就会持续执行
    std::cout << "Numbers between 10 and 0 are "<<std::endl;
    while ( val >= 0 ){
//       sum += val;     //将sum+val赋予sum
        std::cout << val<<" ";
        --val; //将val加1
    }
 //   std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
    getchar();
    getchar();
    return 0;
}