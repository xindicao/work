/*编写程序，提示用户输入两个整数，打印出这两个整数所指定范围内的所有整数 */

#include<iostream>
int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Enter two numbers " << std::endl;
    std::cin >> v1 >> v2;
    if(v1>v2){
        v1 = v1 + v2;
        v2 = v1 - v2;
        v1 = v1 - v2;
    }
    std::cout << "Numbers between " << v1 
        << " and " << v2 << " are " << std::endl;
    while(v1<=v2)
    {
        std::cout << v1 << " ";
        ++v1;
    }
    getchar();
    getchar();
    return 0;
}