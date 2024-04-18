#include <iostream>
#include "conclusion.h"

namespace constants
{
	inline constexpr double pi { 3.14159 };
}

double convertToRadians(double degrees)
{
	return degrees * constants::pi / 180;
}

int main()
{
	std::cout << "Enter a number of degrees: ";
	double degrees{};
	std::cin >> degrees;
	
	double radians { convertToRadians(degrees) };
	std::cout << degrees << " degrees is " << radians << " radians.\n";
	return 0;

}
