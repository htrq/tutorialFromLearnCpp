#include "section2/section2.h"
#include "section3/section3.h"
#include <iostream>

int main()
{
    std::cout << "Choose section: ";
    int input{};
    std::cin >> input;
    if ( input == 2 )
        section2();
    if ( input == 3 )
        section3();


    return 0;
}
