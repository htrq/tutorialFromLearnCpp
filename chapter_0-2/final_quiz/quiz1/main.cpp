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

int main()
{
    int a{getValueOfTheIntVariable()};
    int b{getValueOfTheIntVariable()};
    writeValueOfTheIntVariable(a + b);
    return 0;
}