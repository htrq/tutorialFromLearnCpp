#include <iostream>
#include <limits>
#include "cin_handling.h"

void ignoreLine()   // useful function that helps ignore unnecessary input
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

char get_operator()
{
    while (true)
    {
        char operation{};
        std::cin >> operation;
        switch (operation)
        {
        case '+':
        case '-':
        case '*':
        case '/':
            if (!std::cin.eof() && !std::cin.peek() != '\n')    //peek to check next value without extraction; eof 'end of file' end of buffer
                ignoreLine();
                return operation;


        default:
            std::cout << "OOps something went wrong.. wrong input..\nTry again: ";
        }

        //std::cin.clear();
    }
}

double getDouble()
{
    std::cout << "Enter double value: \n";
    double value{};
    std::cin >> value;  // if we enter non-numerical data type then it will cause infinite loop because
                        // cin can't translate wrong data type to the variable
                        // this means std::cin.fail() will help
    /*
    if (std::cin.fail())
        std::cin.clear();
    */
    if (!std::cin)
    {
        // in unix systems when enter eof command (ctrl-d) cin fails
        if (std::cin.eof())     // so this handles this
            std::exit(0);

        std::cin.clear();
        ignoreLine();
    }
    return value;
}


void cin_handling()
{
    std::cout << "Enter value: ";
    int value{};
    std::cin >> value;
    std::cout << "Input is : " << value << '\n';
    ignoreLine();

    int value2{};
    std::cin >> value2;
    std::cout << "Input 2 is : " << value2 << '\n';
    ignoreLine();

    int value3{};
    std::cin >> value3;
    std::cout << "Input 3 is : " << value3 << '\n';
    ignoreLine();

    int value4{};
    std::cin >> value4;
    std::cout << "Input 4 is : " << value4 << '\n';
    ignoreLine();

    int value5{};
    std::cin >> value5;
    std::cout << "Input 5 is : " << value5 << '\n';
    ignoreLine();
}
