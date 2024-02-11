#include "section4.h"
#include <iostream>

void increment_decrement_prefix_exmple()
{
    int x{ 5 };
    int y{ 5 };

    std::cout << x << ' ' << y << '\n';
    std::cout << x++ << ' ' << y++ << '\n'; // with this post-increment only shows this row and then increment value
    std::cout << x << ' ' << y << '\n';
    std::cout << ++x << ' ' << ++y << '\n'; // pre-increment instantly increases value before output
    // better use prefix versions for more performance reasons
}

void section4()
{
    increment_decrement_prefix_exmple();
}
