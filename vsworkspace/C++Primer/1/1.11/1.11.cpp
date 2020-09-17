#include <iostream>

int main()
{
    for (int val = 10; val > 0; val--)
        std::cout << val << " ";
    std::cout << std::endl;

    int v = 10;
    while (v > 0)
    {
        std::cout << v << " ";
        --v;
    }
    std::cout << std::endl;

    return 0;
}