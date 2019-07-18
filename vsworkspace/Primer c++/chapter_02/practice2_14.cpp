#include <iostream>
int main()
{
    int i = 100;
    int sum = 0;
    for (int i = 0; i != 10;++i){
        sum += i;
    }
        std::cout << "i=" << i << "\t"
                  << "sum=" << sum << std::endl;
    getchar();
    getchar();
    return 0;
}
