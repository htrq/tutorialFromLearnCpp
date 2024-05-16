#include <iostream>
#include <cstddef>
#include "../include/pass_by_address.h"

void printIdNumber(const int* id=nullptr)	// id argument is optional
{
	if (id)
		std::cout << "User's ID is: " << *id << '\n';
	else
		std::cout << "User's ID is unknown\n";	
}

void nulify_func(int*& ptr2)
{
	ptr2 = nullptr;
}

void print(std::nullptr_t)	// there is the type for nullptr in cstddef library
{
	std::cout << "this is nullptr_t called\n";
}	
void print(int*)
{
	std::cout << "this is pointer type called\n";
}

void pass_by_address()
{
	printIdNumber();
	int userid { 55 };
	printIdNumber(&userid);	
	
	int* ptr { &userid };
	std::cout << "ptr before nulify_func:" << ptr << '\n';
	nulify_func(ptr);
	std::cout << "ptr after nulify_func:" << ptr << '\n';

	print(nullptr);
	print(ptr);
}
