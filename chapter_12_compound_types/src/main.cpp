#include <iostream>
#include "../include/lvalue_ref.h"
#include "../include/lvalue_ref_to_const.h"
#include "../include/intro_pointers.h"
#include "../include/pass_by_lvalue_ref.h"
#include "../include/null_pointer.h"
#include "../include/pointers_and_const.h"
#include "../include/pass_by_address.h"

int main()
{
	std::cout << "Enter section: 1 - lvalue reference\n"
			"2 - lvalue to const reference\n"
			"3 - pass by lvalue reference example\n"
			"4 - intro pointers\n"
			"5 - null pointer\n"
			"6 - pointers and const\n"
			"7 - pass by address\n";
	int choice{};
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		lvalue_ref();
		return 0;
	case 2:
		lvalue_ref_to_const();
		return 0;
	case 3: 
		pass_by_lvalue_ref();
		return 0;
	case 4:
		intro_pointers();
		return 0;
	case 5:
		null_pointer();
		return 0;
	case 6:
		pointers_and_const();
		return 0;
	case 7:
		pass_by_address();
		return 0;
	default:
		std::cout << "invalid input\n";
		return 0;
	}
	return 0;
}
