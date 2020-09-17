#include <iostream>

int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	int sum = 0;
	for (int i = v1; i <= v2; i++)
		sum += i;
	std::cout << "The sum of " << v1 << " to " << v2 << " inclusive is " << sum << std::endl;
	return 0;
}