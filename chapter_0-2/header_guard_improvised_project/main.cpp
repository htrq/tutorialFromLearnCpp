#include<iostream>
#include"raise_to_power_of_3_and_plus_2.h"
#include"root_of_3_and_times_2.h"
#include"actions.h"

int main() 
{
    std::unitbuf;
    std::cout << root_of_3_and_times_two(27) << " ";
    std::cout << raise_to_power_of_3_and_plus_2(2) << '\n';
    std::cout << '\n';
    std::cout << "love\n";
std::cerr << "love cout was called\n";
    return 0;
}