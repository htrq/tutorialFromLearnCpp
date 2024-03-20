#include "section_4.h"
#include "../constants/constants.h"
#include <iostream>


void section_4()
{
    std::cout << "constexpr if example: \n";
    std::cout << "const: " << constants_for_chapter::gravity << '\n';
    if constexpr (constants_for_chapter::gravity == 9.8) // prefer constexpr if statement if conditional is a constant expression
        std::cout << "we're on earth\n";
    else
        std::cout << "we aren't on earth\n";

}
