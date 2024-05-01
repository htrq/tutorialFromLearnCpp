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

template <typename Tsf>
constexpr int some_func (Tsf a, double b) // we can use non-template parameters for templates
{
	return 5;
}

void function_templates()
{
	std::cout << max(2, 3) << '\n';
	std::cout << max<double>(5.0, 6.0) << '\n';	// this called template arguement for specification
	std::cout << some_func(3.4, 3.4) << '\n';// matches (double, double)
	std::cout << some_func(4, 3.4) << '\n';	// matches (int, double)


}
