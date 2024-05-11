#include <iostream>
#include "../include/pass_by_lvalue_ref.h"
#define isSmall(T) (sizeof(T) <= 2 * sizeof(void*))// useful macro to define if object is lesser than 2 words

struct S
{
	double a;
	double b;
	double c;
};


constexpr void addOne(int& x)	// first example of usage of references
{
	x++;
}

void pass_by_lvalue_ref()
{
	int x{};
	std::cout << "x before addOne(): " << x << '\n';
	addOne(x);
	std::cout << "x after addOne(): " << x << '\n';

	std::cout << std::boolalpha;
	std::cout << sizeof(void*) << '\n';
	std::cout << isSmall(int) << '\n';
	std::cout << isSmall(double) << '\n';
	std::cout << isSmall(S) << '\n';

	std::cout << &x << " address of x\n";
}
