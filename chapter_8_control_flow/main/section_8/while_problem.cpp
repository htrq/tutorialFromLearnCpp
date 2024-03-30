#include <iostream>
#include "while_problem.h"

void while_problem()
{
    int outer{ 1 };
    while (outer <= 10)
    {
        int inner{ 1 };
        while (inner <= outer)
        {
            std::cout << inner << ' ';
            ++inner;
        }
        std::cout << '\n';
        ++outer;
    }
}
