#include<iostream>

int getFiveValue()
{
std::cerr << "getFiveValue() called\n"; // this is useful to not indent in error messages
    return 5;
}

int main()
{
std::cerr << "main() called\n";
    std::cout << getFiveValue << '\n'; // little advise to set single quotes for only special charecters like \n

    return 0;
}

// after adding parentesis to the getFiveValue we can remove tamporary debugging statements