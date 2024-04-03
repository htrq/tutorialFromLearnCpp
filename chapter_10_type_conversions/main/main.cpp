#include <iostream>
#include "arithmetic_conversions/arithmetic_conversions.h"


int main()
{
    std::cout << "Enter section(5 - arithmetic conversions):";
    int16_t input{};
    std::cin >> input;
    switch (input)
    {
    case 5:
        arithmetic_conversions();
        return 0;
    default:
        std::cout << "Probably incorrect input\n";
    }

    return 0;
}
