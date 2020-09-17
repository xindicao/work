#include <iostream>

int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;

	int lower, upper;
	if (v1 >= v2)
	{
		lower = v2;
		upper = v1;
	}
	else
	{
		lower = v1;
		upper = v2;
	}

	int count = 0;
	for (int i = lower; i <= upper; i++)
	{
		std::cout << i << '\t';
		count++;
		if (count % 10 == 0 && count != 0)
		{
			std::cout << std::endl;
		}
	}
	
	return 0;
}