#include <iostream>

int main()
{
    int sum = 0;
    for (int val = 50; val <= 100; val++)
        sum += val;
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

    int s = 0;
    int v = 50;
    while (v <= 100)
    {
        s += v;
        ++v;
    }
    std::cout << "Sum of 50 to 100 inclusive is " << s << std::endl;
    return 0;
}