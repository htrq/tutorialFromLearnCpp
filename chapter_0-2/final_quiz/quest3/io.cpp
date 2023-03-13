#include"io.h"
#include<iostream>

int getValueOfTheIntVariable()
{
    std::cout << "Please enter value: ";
    int value{};
    std::cin >> value;
    return value;
}

void writeValueOfTheIntVariable(int value)
{
    std::cout << "The value is: " << value << "\n";
}