#include <iostream>
#include "../include/pointers_and_const.h"

void pointers_and_const()
{
	int x { 5 };
	int y { 10 };
	int* const ptr { &x }; 	// to declare const pointer need to use const keyword after asteriks
	std::cout << x << ' ' << ptr << '\n';
	//ptr = &y;	//compile error

	const int xx { 30 };
	const int* const ptr2 { &xx };	// const pointer to const value
	std::cout << xx << ' ' << ptr2 << '\n';


	int yy { 60 };
	const int& ref { yy };
	//int& const ref { yy }; // error const qualifiers cannot be applied to int&
	std::cout << yy << ' ' << ref << '\n';
}
