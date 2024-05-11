#include <iostream>
#include "../include/intro_pointers.h"


void intro_pointers()
{
	const int x{};
	const int y{ 10 };
	std::cout << &x << " address of the x variable\n";
	std::cout << *(&x) << " deference operator * helps to check value stored in an address\n";
	// parentesis *(&x) is not required but better for readablility
	const int& ref { x };	// reference holds value of variable
	const int* ptr{ &x };	//pointer holds address of variable
	
	std::cout << *ptr << " *ptr output\n";	// use * before pointer to output value of the variable 
	std::cout << &ref << " &ref output\n"; 
	ptr = &y; // now pointed on y
	std::cout << *ptr << " *ptr output after it pointed on y\n";
}
