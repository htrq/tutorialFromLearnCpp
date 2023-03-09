#include<iostream>

int getInteger()
{
    std::cout << "Enter int value: \n";
    int x{};
    std::cin >> x;
    return x;
}