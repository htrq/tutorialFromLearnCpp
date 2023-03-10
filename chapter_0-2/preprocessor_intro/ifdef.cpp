#include<iostream>
#define PRINT_JOE

int main()
{
    #ifdef PRINT_JOE
    std::cout << "Joe\n";
    #endif

    #ifdef PRINT_LOL
    std::cout << "lol\n";   //this will be excluded as there is not lol defined 
    #endif

    return 0;
}