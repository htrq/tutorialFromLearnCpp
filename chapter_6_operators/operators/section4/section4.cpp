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

void coma_operator()
{
    int x{ 1 };
    int y{ 2 };

    std::cout << (++x, ++y) << '\n'; // increment x and y, evaluates to the right operand
}

void section4()
{
    increment_decrement_prefix_exmple();
    coma_operator();
}
