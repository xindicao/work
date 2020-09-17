#include <iostream>
#include "1.24.h"

int main()
{
	Sales_item tran1, tran2;
	int amount = 0;
	std::cout << "Enter some transeations:" << std::endl;
	std::cin >> tran1;
	amount++;
	while (std::cin >> tran2)
	{
		if (tran1.isbn() == tran2.isbn())
		{
			amount++;
		}
		else
		{
			std::cout << "The amount of ISBN = " << tran1.isbn() << " is " << amount << std::endl;
			tran1 = tran2;
			amount = 1;
		}
	}
	std::cout << "The amount of ISBN = " << tran1.isbn() << " is " << amount << std::endl;

	return 0;
}