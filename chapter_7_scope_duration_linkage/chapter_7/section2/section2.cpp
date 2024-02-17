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
}

namespace Foo
{
    int doSomething(int a, int b)
    {
        return a - b;
    }

}
