#include<iostream>
#define PRINT_JOE

int main()
{
    #ifdef PRINT_JOE
    std::cout << "Joe\n";
    #endif

    #ifndef PRINT_LOL
    std::cout << "lol\n";   //this will be compiled altogether because print_lol never been declared
    #endif

    return 0;
}