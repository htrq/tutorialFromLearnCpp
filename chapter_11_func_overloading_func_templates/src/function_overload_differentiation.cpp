#include <iostream>
#include "../include/function_overload_differentiation.h"
using Age = int;

int returnAge(int a)
{
	return a;
}
//Age returnAge(int a)	// functions arent gonna be differentiated because of type aliases and typedefs
//{
//	return 30;
//}

int add_second_example(int x, int y){ return x + y; }
double add_second_example(double x, double y){ return x + y; }
double add_second_example(int x, double y){ return x + y; }
double add_second_example(double x, int y){ return x + y; }	// those are gonna be differentiated

// retun type of function is not considered for differentiation

//int getRandomValue(){}
//double getRandomValue(){}	// compile error 
				// this makes sense. if you were the compiler and saw this statement:
				// getRandomValue() which overloaded func to use??
// therefore better change names 				
int getRandomInt(){ return 30; }
double getRandomDouble(){ return 30.334; }

void function_overload_differentiation()
{
	std::cout << "result of func returAge: " << returnAge(30) << '\n';
	std::cout << "result of add int int: " << add_second_example(3, 4) << '\n';
	std::cout << "result of add double double: " << add_second_example(3.1, 4.1) << '\n';
	std::cout << "result of add double int: " << add_second_example(3.1, 4) << '\n';
}
