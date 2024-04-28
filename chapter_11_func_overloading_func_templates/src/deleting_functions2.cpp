#include <iostream>
#include "../include/deleting_functions2.h"

void printInt2(int a)	// though in previous example double value was promoted to int type when deleting functions lays restrictions on overloaded function resolution
{
	std::cout << "Print: " << a << '\n';
}

void printInt2(bool a) = delete;
void printInt2(char a) = delete;

void deleting_functions_example2()
{
	// will cause compile error no candidate avaulable for this
	printInt2(3);
	// printInt('a');
	// printInt(true);
	// printInt(4.0);
}
