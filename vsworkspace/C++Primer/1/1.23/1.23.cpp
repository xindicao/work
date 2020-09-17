#include <iostream>
#include "1.23.h"

int main()
{
	Sales_item total, tran;
	std::cout << "Enter some same transactions:" << std::endl;
	while (std::cin >> total)
	{
		while (std::cin >> tran)
		{
			if (total.isbn() == tran.isbn())
			{
				total += tran;
			}
			else
			{
				std::cout << "Different ISBN." << std::endl;
			}
		}
		std::cout << "Total transactions are:" << std::endl << total;
	}

	return 0;
}