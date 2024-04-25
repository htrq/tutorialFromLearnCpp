#include <iostream>
#include "../include/function_overload_resolution.h"

void print(int a)
{
	std::cout << a << '\n';
}

void print(double a)
{
	std::cout << a << '\n';
}

void print(unsigned int a)
{
	std::cout << a << '\n';	
}

void print(char, int)
{
	std::cout << 'a' << '\n';
}	

void print(char, double)
{
	std::cout << 'b' << '\n';
}

void print(char, float)
{
	std::cout << 'c' << '\n';
}

void function_overload_resolution()
{
	//print(3L);	// will issue a compile error 
	//print('a');	// doesn't match neither int nor double how to resolve this?
	

	//print(3L);		// ambiguious match issue a compile error
	// there 3 ways to resolve ambiguious match 
	// 1) determine exact type overloading function for such cases
	// 2) explicitly cast needed type so compule resolve this
	long a{ 1L };
	print(static_cast<unsigned int>(a));

	// 3) if your argument literal use suffix
	print(3u);

	print('x', 'a');
}
