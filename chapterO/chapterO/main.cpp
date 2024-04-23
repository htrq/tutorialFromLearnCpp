#include "O1/O1.h"
#include "O2/O2.h"
#include "O3/O3.h"
#include "O4/O4.h"
#include <iostream>


int main()
{
    __attribute_maybe_unused__ double gravity { 9.8 };  // by the way its attribute to avoid warnings about
    std::cout << "Which section to choose: ";
    int choice{};
    std::cin >> choice;
    if ( choice == 1 )
        O1();
    if ( choice == 2)
        O2();
    if ( choice == 3)
        O3();
    if ( choice == 4)
        O4();

    return 0;
}
