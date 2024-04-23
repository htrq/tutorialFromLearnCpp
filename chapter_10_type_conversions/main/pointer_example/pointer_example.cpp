#include <iostream>
#include "pointer_example.h"

void pointer_example()
{
    int a{ 10 };
    int b{ 23 };
    int *P1 = &a;
    int *P2 = &b;
    *P2 = 54;

    a = 12;

    std::cout << a << ' ' << b << ' ' << *P1 << ' ' << *P2 << '\n';
}
