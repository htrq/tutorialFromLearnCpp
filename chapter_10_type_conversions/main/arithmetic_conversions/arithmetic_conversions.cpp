#include <typeinfo>  // for typeid.name()
#include <iostream>
#include "arithmetic_conversions.h"

void arithmetic_conversions()
{
    std::cout << "Here is some examples with arithmetic conversions:\n";
    std::cout << "Result of 3(int) - 3.5(double): " << typeid(3 - 3.5).name() << ' ' << 3 - 3.5 << '\n';
    std::cout << "Result of 3(unsighned int) - 2(sighned int): " << typeid(3u - 2).name() << ' ' << 3u - 2 << '\n';
    std::cout << "Result of 3(sighned int) - 2(sighned int): " << typeid(3 - 2).name() << ' ' << 3 - 2 << '\n';
    std::cout << "Result of (-3 < 5u): " << std::boolalpha << (-3 < 5u) << '\n';

}
