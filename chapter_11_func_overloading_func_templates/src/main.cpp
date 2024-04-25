#include <iostream>
#include "../include/func_overload_func_templates.h"
#include "../include/function_overload_differentiation.h"

int main()
{
	std::cout << "choose:\n1-func overload introduction\n"
			      "2-function overload differentiation\n";
	int choice{};
	std::cin >> choice;
	switch(choice)
	{
	case 1:
		func_overload_func_templates();	
		return 0;
	case 2:
		function_overload_differentiation();
		return 0;
	default:
		std::cout << "invalid input\n";
		return 0;
	}
}
