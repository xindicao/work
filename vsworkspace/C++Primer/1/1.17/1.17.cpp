#include <iostream>

int main()
{
	std::cout << "Enter a set of numbers:" << std::endl;
	int count = 0;
	int value;
	while (std::cin >> value)
	{
		if (value < 0)
			count++;
	}
	std::cout << "The number of negative numbers is " << count << std::endl;
	return 0;
}