#include "section2.h"
#include <iostream>

int doSomething(int a, int b)
{
    return a * b;
}

namespace Goo
{
    int doSomething(int a, int b)
    {
        return a + b;
    }

    int returnDoSomethingFromGlobalScope()
    {
        return ::doSomething(3, 4);
    }
}

namespace Foo
{
    int doSomething(int a, int b)
    {
        return a - b;
    }
    namespace FooSecond
    {
        int doSomething(int a, int b)
        {
            return a / b;
        }
    }
}


