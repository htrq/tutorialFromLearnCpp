#include<iostream>

int getInteger()
{
    std::cout << "Enter int value: ";
    int x{};
    std::cin >> x;
    return x;
}