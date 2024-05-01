#include <iostream>
#include "../include/templates_with_multiple_types.h"


//template <typename T>
//constexpr T max(T a, T b)
//{
//	return (a > b) ? a : b;
//}
// to make template having multiple types:
template <typename T, typename U>
constexpr auto max (T a, U b)
{
	return (a > b) ? a : b;
}
// PAY ATTENTION ON AUTO KEYWORD
// if we let int and double in double value will be narrowed so we use auto keyword
//
// from c++20 following syntax converts to the same template from above
//auto max(auto a, auto b)
//{
//	return (a > b) ? a : b;
//}

void templates_with_multiple_types()
{
	std::cout << max(2, 3) << '\n';	// okay
	std::cout << max(2.0, 3.0) << '\n';	// okay
	std::cout << max(2, 3.0) << '\n';	// compile error because i havent explicitly showed <double>max

	
}
