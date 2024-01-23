#include <iostream>
#include <cstdint>

void print(int x)
{
    std::cout << x << "\n";
}

int main()
{
    double y { 5.4 };
    print(y);   // no potential loss data warning whatsoever

    char letter { 97 };
    std::cout << letter << " has value of " << static_cast<int>(letter) << "\n";    // this is example of use static_cast to translate char into integer type of data

    unsigned int joke { -5 };   // this bro doesnt throw any warnings on that, so you should be careful with unsighned and sighned data types
    std::cout << joke << "\n";

    std::int8_t myWierdInt{65}; // and this bro outputs char because he treat it like char, not int!
    std::cout << myWierdInt << "\n";    // output: A

    return 0;
}
