#include "section3.h"
#include <iostream>


void section3()
{
    int x{ 5 };

    {
        int y{ 7 };
        std::cout << x << " " << y << '\n'; // x can be accessed from nested block
    }
    {
        int x{ 6 };
        std::cout << x << '\n'; // will print local x variable
    }

    std::cout << "Enter larger number: ";
    int larger{};
    std::cin >> larger;
    std::cout << "Enter smaller number: ";
    int smaller{};
    std::cin >> smaller;
    if ( larger < smaller )
    {
        std::cout << "Swapping integers...\n";
        /*
        int tempInt{ smaller };     // user std::swap instead of this chunk of code
        smaller = larger;
        larger = tempInt;
        */
        std::swap(larger, smaller);
    }
    std::cout << "The smallest value: " << smaller << '\n';
    std::cout << "The largest value: " << larger << '\n';
}

