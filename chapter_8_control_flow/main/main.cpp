#include <iostream>
#include "section_4/section_4.h"

int main()
{
    int input{};
    std::cout << "Choose chapter: ";
    std::cin >> input;
    if ( input == 4)
        section_4();
    return 0;
}
