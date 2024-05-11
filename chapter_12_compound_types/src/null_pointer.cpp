#include <iostream>
#include "../include/null_pointer.h"

void null_pointer()
{
	int* nullPtr { nullptr };
	if (nullPtr)	// implicit conversion to boolean btw
		std::cout << "nullPtr is not null\n";
	else 
		std::cout << "nullPtr is null\n";
	// pointer has value either null or pointing at some address
}
