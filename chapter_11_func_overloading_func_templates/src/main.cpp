#include <iostream>
#include "../include/func_overload_func_templates.h"
#include "../include/function_overload_differentiation.h"
#include "../include/function_overload_resolution.h"
#include "../include/deleting_functions.h"
#include "../include/deleting_functions2.h"


int main()
{
	std::cout << "choose:\n1-func overload introduction\n"
			      "2-function overload differentiation\n"
			      "3-finction overload resolution\n"
			      "4-deleting function\n";
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
	case 3:
		function_overload_resolution();
		return 0;
	case 4:
		deleting_functions_example();
		deleting_functions_example2();
		return 0;
	default:
		std::cout << "invalid input\n";
		return 0;
	}
}
