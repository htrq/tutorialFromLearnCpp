#include <iostream>
#include "arithmetic_conversions/arithmetic_conversions.h"
#include "pointer_example/pointer_example.h"


int main()
{
    std::cout << "Enter section(1 - pointer example, 5 - arithmetic conversions):";
    int16_t input{};
    std::cin >> input;
    switch (input)
    {
    case 1:
        pointer_example();
        return 0;
    case 5:
        arithmetic_conversions();
        return 0;
    default:
        std::cout << "Probably incorrect input\n";
    }

    return 0;
}
