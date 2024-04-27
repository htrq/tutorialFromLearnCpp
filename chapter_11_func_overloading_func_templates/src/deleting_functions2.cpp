#include <iostream>
#include "../include/deleting_functions2.h"

void printInt2(int a)
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
