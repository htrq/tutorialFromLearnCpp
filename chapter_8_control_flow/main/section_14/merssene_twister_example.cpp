#include <iostream>
#include <random>
#include <chrono>
#include "merssene_twister_example.h"

void merssene_twister_example()
{
    std::random_device rd{};
    //std::seed_seq ss{ static_cast<std::seed_seq::result_type>(std::chrono::steady_clock::now().time_since_epoch().count()) };
                //rd(), rd(), rd(), rd(), rd(), rd(), rd() };
    std::mt19937 mt{  static_cast<std::seed_seq::result_type>(std::chrono::steady_clock::now().time_since_epoch().count()) };  // now seed is depending on system clocks in nanoseconds
    std::cout << "Merssene twister randomizer result: " << '\n';
    for (int i{0}; i <= 10; ++i)
    {
        std::cout << mt() << '\n';
    }

    std::uniform_int_distribution real_distr(1, 1000);
    std::cout << "Merssene twister randomizer result in range from 1 to 1000: " << '\n';
    for (int i{0}; i <= 10; ++i)
    {
        std::cout << real_distr(mt) << '\n';
    }
}
