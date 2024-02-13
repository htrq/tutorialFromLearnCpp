#include "O1.h"
#include <bitset>
#include <iostream>



void O1()
{
    std::bitset<8> bitset{ 0b0000'0101 };

    bitset.set(5);
    bitset.reset(2);
    bitset.flip(3);

    std::cout << "All the bits: " << bitset << '\n';
    std::cout << "Bit 5 has value: " << bitset.test(5) << '\n';
    std::cout << "Bit 2 has value: " << bitset.test(2) << '\n';



}
