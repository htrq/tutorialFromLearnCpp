#include "conclusion.h"
#include <iostream>



int accumulate(int x)
{
    static int accumulated_value{ 0 };
    accumulated_value += x;
    return accumulated_value;
}

void conclusion()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10
}
