#include <iostream>
#include "while_problem.h"

void while_problem()
{
    int outer{ 1 };
    int inner{ 1 }; // declared once
    while (outer <= 5)
    {
        inner = 1;
        while (inner <= outer)
        {
            std::cout << inner << ' ';
            ++inner;
        }
        std::cout << '\n';
        ++outer;
    }
}
