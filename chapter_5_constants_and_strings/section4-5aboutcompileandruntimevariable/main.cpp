#include <iostream>

int getSomeIntegerValue
{
    return 60;
}

int main()
{
    const int f { 5 };  //this is constant a compile time variable
    const int ff { getSomeIntegerValue() }; // now this is runtime variable because func returns non-const variable

    const double fff { 5.0 };   // this is runtime variable because only integer with const initializer can be compile time variable
    constexpr double ffff { 5.5 };  // now this is compile time variable but initializer always has to be const
    // constexpr means that variable must to be known at compile time

    return 0;
}
