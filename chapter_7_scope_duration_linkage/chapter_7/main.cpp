#include "section2/section2.h"
#include <iostream>

int main()
{
    std::cout << "Return of Foo::doSomething(3, 4): " << Foo::doSomething(3, 4) << '\n';
    std::cout << "Return of Goo::doSomething(3, 4): " << Goo::doSomething(3, 4) << '\n';
    std::cout << "Return of doSomething that looks for declaration in global scope: " << Goo::returnDoSomethingFromGlobalScope() << '\n';   // ::doSomething will be looking in global scope

    return 0;
}
