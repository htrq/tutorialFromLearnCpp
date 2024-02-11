#include "section1/section1.h"
#include "section2/section2.h"
#include "section4/section4.h"
#include <iostream>


int main()
{
    std::cout << "Which section start?: \n";
    int input{};
    std::cin >> input;
    if (input == 1)
        section1();
    if (input == 2)
        section2();
    if (input == 4)
        section4();

    return 0;
}
