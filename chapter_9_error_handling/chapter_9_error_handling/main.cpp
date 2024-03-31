#include <iostream>
#include <limits>
#include "section_5/cin_handling.h"
#include "assert/assert_example.h"

void ignore_line()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.clear();
}

int main()
{
    static_assert(sizeof(int16_t) == 2, "int16_t have to be 2 bytes");  // example of static_assert works during compile time
    std::cout << "Enter number (1 - cin handling example, 2 - assert example): ";
    int16_t input{};
    std::cin >> input;
    if (!std::cin)
    {
        ignore_line();
        std::cout << "incorrect input\nTry again: ";
    }
    switch (input)
    {
    case 1:
    {
        getDouble();
        std::cout << "Enter operation for calculator (+, -, *, /): ";
        char operation{get_operator()};
        return 0;
    }
    case 2:
        assert_example();
        return 0;
    default:
        std::cout << "incorrect number\nTry again: ";
        return 0;
    }

    //cin_handling(); // if you enter 9f 9 extracts successfully and other variables take zero value


    return 0;
}
