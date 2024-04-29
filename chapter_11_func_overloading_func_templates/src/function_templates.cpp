#include <iostream>
#include "../include/function_templates.h"

//constexpr int max(int a, int b)	// what if we need (double, double)? use templates instead of violate DRY
//{
//	return (a > b)? a : b;
//}

template <typename T>
constexpr T max(T a, T b)
{
	return (a > b) ? a : b;	// now compiler will make all tidious work making overloaded functions
}

void function_templates()
{
	std::cout << max(2, 3) << '\n';
}
