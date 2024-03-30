#include <iostream>
#include "section_5/cin_handling.h"

int main()
{
    //cin_handling(); // if you enter 9f 9 extracts successfully and other variables take zero value
    getDouble();
    std::cout << "Enter operation for calculator (+, -, *, /): ";
    char operation{get_operator()};
    return 0;
}
