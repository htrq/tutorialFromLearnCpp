#include <iostream>
#include "../include/func_overload_func_templates.h"

int main()
{
	std::cout << "choose:\n1-func overload introduction\n";
	int choice{};
	std::cin >> choice;
	switch(choice)
	{
	case 1:
		func_overload_func_templates();	
		return 0;
	default:
		std::cout << "invalid input\n";
		return 0;
	}
	return 0;
}
