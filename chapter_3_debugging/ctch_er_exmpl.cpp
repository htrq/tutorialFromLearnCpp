#include<iostream>

int getFiveValue()
{
std::cerr << "getFiveValue called\n"; // this is useful to not indent in error messages
    return 5;
}

int main()
{
std::cerr << "main() called\n";
    std::cout << getFiveValue << "\n";

    return 0;
}