#include <iostream>
#include "1.25.h"

int main()
{
	// declare variables to hold running sum and data for next record
	Sales_item total, trans;
	// is there data to process?
	if (std::cin >> total)
	{
		// if so, read the transaction records
		while (std::cin >> trans)
		{
			if (compareIsbn(total, trans))
			{
				// match: update the running total
				total += trans;
			}
			else
			{
				// no match: print & assign to total
				std::cout << total << std::endl;
				total = trans;
			}
		}
		// remember to print last record
		std::cout << total << std::endl;
	}
	else
	{
		// no input! warn the user
		std::cout << "No data?!" << std::endl;
		return -1; // indicate failure
	}

	return 0;
}
