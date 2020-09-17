#include <iostream>
#include "1.21.h"

int main()
{
	Sales_item book;
	std::cout << "Enter transactions:" << std::endl;
	while (std::cin >> book)
	{
		std::cout << "ISBN, number of copies sold, total revenue, and average price are:" << std::endl;
		std::cout << book << std::endl;
	}
	return 0;
}