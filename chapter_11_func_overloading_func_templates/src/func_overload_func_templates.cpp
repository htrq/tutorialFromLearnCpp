#include <iostream>
#include <stdint.h>
#include "../include/func_overload_func_templates.h"
constexpr int add(int a, int b) // simple example of function overloading 
{
	return a + b;
}

constexpr double add(double a, double b)
{
	return a + b;
}

void func_overload_func_templates()
{
	std::cout << add(1, 3) << '\n';// calls int add
	std::cout << add(1.3, 3.4) << '\n';//calls double add	
}
