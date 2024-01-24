#include <iomanip>
#include <iostream>

int main()
{
    std::cout << std::left;
    std::cout << std::setw(16) << "Bool: " << sizeof(bool) << " bytes\n";
    std::cout << std::setw(16) << "Char: " << sizeof(char) << " bytes\n";
    std::cout << std::setw(16) << "Integer: " << sizeof(int) << " bytes\n";

    return 0;
}
