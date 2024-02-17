#include "O4.h"
#include <iostream>
#include <bitset>
#include <cstdint>

void O4()
{
    int user_entered_value{};
    do
    {
        std::cout << "Enter number between 0 and 255: ";
        std::cin >> user_entered_value;
    }
    while( !(0 <= user_entered_value && user_entered_value <= 255) );
    std::cout << user_entered_value << " user entered value\n";
    std::bitset<8> bitset{};
    bitset = user_entered_value;
    std::cout << "Entered value : " << bitset << '\n';

    std::cout << "In the end you can enter  bits like #### #### with no space: ";
    bitset = 0;
    std::cin >> bitset;
    std::cout << "Entered bitset: " << bitset << '\n';
}
