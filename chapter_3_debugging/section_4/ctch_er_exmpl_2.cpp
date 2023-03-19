#include<iostream>

int add(int x, int y)
{
std::cerr << "add() called (x = " << x << " y = " << y << ")\n";
    return x + y;
}

void printValue(int num)
{
    std::cout << "The value is: " << num << '\n';
}

int getUserInput()
{
    std::cout << "Please enter number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
std::cerr << "main() called\n";
    int x{ getUserInput() };
std::cerr << "main::x = " << x << '\n';
    int y{ getUserInput() };
std::cerr << "main::y = " << y << '\n';
    printValue(add(x, 5));

    return 0;
}