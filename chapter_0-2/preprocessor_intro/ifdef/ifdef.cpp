#include<iostream>
#define PRINT_JOE
#define NINE 9
#define PRINT //during call function foo won't see this macros in other file

void foo(); //forward declaration

int main()
{
    #ifdef PRINT_JOE
    std::cout << "Joe\n";
    #endif

    #ifndef PRINT_LOL
    std::cout << "lol\n";   //this will be compiled altogether because print_lol never been declared
    #endif

    #ifdef NINE //preprocessor only substitude normal code so that NINE is replaced only in cout
    std::cout << NINE << "\n";
    #endif

    foo();  // here will be printed "Not printing" because macros define located in other file!

    return 0;
}