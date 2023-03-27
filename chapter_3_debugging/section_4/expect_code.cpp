#include<iostream>


 // This example is to check using debugger how variable x is changing
int main()
{
    int x{ 1 };
    std::cout << x << "\n";

    x += 2;
    std::cout << x << "\n";

    x += 3;
    std::cout << x << "\n";

    return 0;
}