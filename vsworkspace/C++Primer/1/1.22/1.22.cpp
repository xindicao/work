#include <iostream>
#include "1.22.h"

int main()
{
	Sales_item tran1, tran2;
	std::cout << "Enter two transactions:" << std::endl;
	std::cin >> tran1 >> tran2;

	if (tran1.isbn() == tran2.isbn())
	{
		std::cout << "The total information:" << std::endl;
		std::cout << "ISBN, number of copies sold, total revenue, and average price are : "
			<< std::endl << tran1 + tran2 << std::endl;
	}
	else
	{
		std::cout << "The transactions have different ISBN." << std::endl;
	}

	return 0;
}