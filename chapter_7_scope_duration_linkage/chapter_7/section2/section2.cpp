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

void section2()
{
    std::cout << "Return of Foo::doSomething(3, 4): " << Foo::doSomething(3, 4) << '\n';
    std::cout << "Return of Goo::doSomething(3, 4): " << Goo::doSomething(3, 4) << '\n';
    std::cout << "Return of doSomething that looks for declaration in global scope: " << Goo::returnDoSomethingFromGlobalScope() << '\n';   // ::doSomething will be looking in global scope
    namespace Active=Foo::FooSecond;    // for long nested namespaces can be created shorten namespace
    std::cout << "Return of Active::doSomething(3, 4): " << Active::doSomething(3, 4) << '\n';
}


