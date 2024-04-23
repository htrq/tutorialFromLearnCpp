#include <iostream>

void print(int a)
{
	std::cout << a << '\n';
}

void print(double a)
{
	std::cout << a << '\n';
}


void function_overload_resolution()
{
	std::cout << print(3L) << '\n';
	std::cout << print('a') << '\n';	// doesn't match neither int nor double how to resolve this?

}
