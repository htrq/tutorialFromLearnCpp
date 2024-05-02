#include <iostream>
#include "../include/lvalue_ref.h"
#include "../include/lvalue_ref_to_const.h"

int main()
{
	std::cout << "Enter section: 1 - lvalue reference\n"
			"2 - lvalue to const reference\n";	
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
	default:
		std::cout << "invalid input\n";
		return 0;
	}
	return 0;
}
