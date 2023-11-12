#include <iostream>
#include <iomanip>

int main()
{
    bool b1 { false };
    bool b2, b3 {}; // false by default
    std::cout << std::setw(16) << b1 << "\n";
    
    std::cout << std::boolalpha;    // interesting function that prints bool values as true or false
    std::cout << std::setw(16) << b1 << "\n";

    std::cout << std::noboolalpha; // to turn off true or false output
    std::cout << std::setw(16) << b1 << "\n";

    b2 = 999;
    std::cout << std::setw(15) << "b2 = 999: " << b2 << "\n";    // copy initialization allows implicit conversion int to bool

    //to let user input value like true or false we should enable boolalpha first otherwise cin will accept only two values 0 or 1
    std::cout << "enter b3 bool value: ";
    std::cin >> std::boolalpha >> b3;
    std::cout << "b3: " << b3 << "\n";  // now cin won't take 0 or 1 values


    return 0;
}