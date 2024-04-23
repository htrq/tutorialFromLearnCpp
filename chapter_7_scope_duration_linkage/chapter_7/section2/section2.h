#ifndef SECTION2_H
#define SECTION2_H


namespace Goo   // in headers function must be in namespaces too same as in cpp files
{
    int doSomething(int a, int b);
    int returnDoSomethingFromGlobalScope();
}

namespace Foo
{
    int doSomething(int a, int b);
    namespace FooSecond
    {
        int doSomething(int a, int b);
    }
}

void section2();

#endif // SECTION2_H
