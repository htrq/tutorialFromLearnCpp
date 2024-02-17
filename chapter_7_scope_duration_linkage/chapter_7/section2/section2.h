#ifndef SECTION2_H
#define SECTION2_H

int doSomething(int a, int b);

namespace Goo   // in headers function must be in namespaces too same as in cpp files
{
    int doSomething(int a, int b);
}

namespace Foo
{
    int doSomething(int a, int b);
}

#endif // SECTION2_H
