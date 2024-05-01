#include <iostream>

int x { 5 };
int& ref { x };	// valid lvalue bound to modifable lvalue

//int& invalidRef; // compile error reference must be initialized

//const int y { 4 };
//int& yref { y }; // compile error cannot bound lvalue to non modifable lvalue
//int& rvalueref { 5 }; // invalid cannot be bounded with rvalue


void lvalue_ref()
{
	std::cout << x << '\n';
	std::cout << ref << '\n';
}
