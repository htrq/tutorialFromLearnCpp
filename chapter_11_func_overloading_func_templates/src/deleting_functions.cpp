#include <iostream>
#include "../include/deleting_functions.h"

void printInt(int a)
{
	std::cout << "Print: " << a << '\n';
}


void deleting_functions_example()
{
	printInt(3);
	printInt('a');
	printInt(true);
	printInt(4.0);
}
