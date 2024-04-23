#include <iostream>
#include <string>   // to use std::to_string

int main()
{
    //arithmetic if operator / conditional operator
    // c?x:y
    constexpr bool isEnoughBigGym { false };
    constexpr int members { isEnoughBigGym ? 30 : 15};
    std::cout << members << "\n";

    constexpr float x { 4.59 };
    std::cout << ((x > 5) ? std::to_string(x) : std::string{ "x > 5" }) << "\n"; // arithmetic if have return same data type

    return 0;
}
