#include "O1/O1.h"
#include <iostream>


int main()
{
    __attribute_maybe_unused__ double gravity { 9.8 };  // by the way its attribute to avoid warnings about
    std::cout << "Which section to choose: ";
    int choice{};
    std::cin >> choice;
    if ( choice == 1 )
        O1();
    return 0;
}
