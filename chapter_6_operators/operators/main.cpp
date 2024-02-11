#include "section1/section_one.h"
#include <iostream>


int main()
{
    std::cout << "Which section start?: \n";
    int input{};
    std::cin >> input;
    if(input == 1)
        section_one();

    return 0;
}
