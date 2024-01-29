#include <iostream>
#include <bitset>

int main()
{
    std::cout << 5.0 << "\n";   // this is double by default
    std::cout << 5.0f << "\n";  // now its eoctplicitly float
    std::cout << 5UL << "\n"; // unsigned long
    std::cout << 5ll << "\n"; //  long long
    std::cout << 5u << "\n";  // unsigned int

    float var { 5.0f };     // always use float prefix or compiler will cause an error

    double avogadro { 6.02e23 };    // variable in scientific notation style
    double electronCharge { 1.6e-19 };
    std::cout << avogadro << ", " <<  electronCharge << "\n";


    // prefixes for different numerical systems
    // octal:
    int oct { 012 };
    std::cout << oct << "\n"; // 10
    // hexadecimal
    int hex { 0xF };    //  you can use 0X, but 0x is more conventional
    std::cout << hex << "\n";   // 15
    // bin
    // from C++ 14 there is support for binary digits
    int bin { 0b1010 }; // 10
    std::cout << bin << "\n";

    // from c++14 there is quotation marks to help read long digits
    int64_t veryLong { 4'685'432'111 };
    int justLongBinIntegral { 0b1010'1111'1001'0001 };
    std::cout << veryLong << ", " << justLongBinIntegral << "\n";   // works just well and much easier to read

    // another cool feature that you can configure output digit in octal, hexadecimal, binary or decimal
    // std::hex std::dec std::oct
    std::cout << std::hex << veryLong << "\n";
    std::cout << std::oct << veryLong << "\n";
    std::cout << std::dec << veryLong << "\n";
    // c++ doesn't have built in instruments for binary output but there is the library for this
    // include <bitset>
    std::bitset<8> bin1 { 0b0110'0111 };
    std::bitset<8> bin2 { 0x5C };
    std::cout << bin1 << ", " << bin2 << "\n";

    return 0;
}
