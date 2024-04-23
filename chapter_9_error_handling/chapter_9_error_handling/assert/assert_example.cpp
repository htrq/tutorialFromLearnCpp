#include "assert.h"
#include "../constants/constants.h"
#include <iostream>
#include <cassert>
#include <cmath>

double calculate_falling_time(double height)
{
    assert(constants_for_project::gravity > 0 && "gravity can't be negative");
    return std::sqrt((2.0 * height) / constants_for_project::gravity);
}

void assert_example()
{
    std::cout << "Ball is falling from some height\nEnter the height from the ground: ";
    double height{};
    std::cin >> height;
    std::cout << "So the falling time is: " << calculate_falling_time(height) << '\n';
}
