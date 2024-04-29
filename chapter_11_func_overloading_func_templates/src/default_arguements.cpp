#include <iostream>
#include "../include/default_arguements.h"

void print(int a, int b=10)	// b is called default parameter for function
{
	std::cout << a << ' ' << b << '\n';
}

//void print_second(int a=3, int b)	// default arguement mustn't stand before other parameters
					// compile error

void default_arguements()
{
	print(1, 2);
	print(3);
}
