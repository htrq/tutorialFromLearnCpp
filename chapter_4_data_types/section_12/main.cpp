#include <iostream>
#include <cstdint>

void print1(int x)
{
    std::cout << x << "\n";
}

int main()
{
    double y { 5.4 };
    print1(y);   // no potential loss data warning whatsoever

    char letter { 97 };
    std::cout << letter << " has value of " << static_cast<int>(letter) << "\n";    // this is example of use static_cast to translate char into integer type of data

    unsigned int joke { -5 };   // this bro doesnt throw any warnings on that, so you should be careful with unsighned and sighned data types
    std::cout << joke << "\n";

    std::int8_t intReconAsChar { 65 }; // and this bro outputs char because he treat it like char, not int!
    std::cout << intReconAsChar << "\n";    // output: A


    //task 1
    std::cout << "enter the letter: ";
    std::cin >> letter;
    std::cout << "Youve entered character " << letter << "\n";
    std::cout << "In ASCII its " << static_cast<int>(letter) << "\n";
    //task 2
    std::cout << "Now it's in double + 0.567 = " << static_cast<double>(letter) + static_cast<double>(0.567) << "\n"; // just trying different ways to convert via stati_cast

    return 0;
}
