#include <iostream>
#include <cstdint>
#include <iomanip>

int main() 
{
    std::int32_t{5}; // int with strictly fixed size value
    std::right;
    std::cout << std::setw(16) << "least 8 bits: " << sizeof(int_least8_t) * 8 << "\n";
    std::cout << std::setw(16) << "least 16 bits: " << sizeof(int_least16_t) * 8 << "\n";
    std::cout << std::setw(16) << "least 32 bits: " << sizeof(int_least32_t) * 8 << "\n";
    std::cout << std::setw(16) << "least 64 bits: " << sizeof(int_least64_t) * 8 << "\n";
    std::cout << "\n";
    std::cout << std::setw(16) << "fast 8 bits: " << sizeof(int_fast8_t) * 8 << "\n";
    std::cout << std::setw(16) << "fast 16 bits: " << sizeof(int_fast16_t) * 8 << "\n";
    std::cout << std::setw(16) << "fast 32 bits: " << sizeof(int_fast32_t) * 8 << "\n";
    std::cout << std::setw(16) << "fast 64 bits: " << sizeof(int_fast64_t) * 8 << "\n";

    double number {1.6e-5}; //formalized to scientific documentation nubmers
    std::cout << number << "\n";

    return 0;

}