#include "section2/section2.h"
#include "section3/section3.h"
#include "section5/section5.h"
#include "section6/section6.h"
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
    if ( input == 5 )
        section5();
    if ( input == 6 )
        section6();


    return 0;
}
