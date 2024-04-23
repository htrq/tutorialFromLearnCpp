#include "section5.h"
#include <iostream>

int value{ 111 };
int g_value{ 111 };

int foo()
{
    return value;   // will return global variable
}

void section5()
{
    int apples{ 5 };
    {
        //int apples{ 10 }; will call apples from outer block
        std::cout << apples << '\n';
    }
    std::cout << apples << '\n';

    int value{ 222 };   // this is called value shadowing
    std::cout << "local value is: " << value << '\n';
    std::cout << "global value is: " << foo() << '\n';
    std::cout << "this calls global value via namespace: " << ::value << '\n';
    std::cout << "best practice is to avoid variable shadowing and use g_ prefix: " << g_value << '\n';
}
