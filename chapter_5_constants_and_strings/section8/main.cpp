#include <iostream>
#include <type_traits>  // this library is for std::is_constant_evaluated() but only in c++20

constexpr int greater(int x, int y)     // here is example of constival function
{
    if (std::is_constant_evaluated())
        return (x > y ? x : y);
    else
        return 404;     // now check how outputs differs
}
consteval auto compileTime(auto value)
{
    return value;
}


consteval int doSomething(int x, int y) // function is consteval
{
    x = x + 2;       // we can modify the value of non-const function parameters

    int z { x + y }; // we can instantiate non-const local variables
    if (x > y)
        z = z - 1;   // and then modify their values
                     // the compiler will essentially “execute” the function and return the calculated value
    return z;
}

int main()
{
    const int x { 30 }; // if we'll remove const its still goin to compile though constexpr declared
    const int y { 15 }; // it is done so you weren't have to dublicate functions with either const or not const return value

    std::cout << greater(x, y) << " is greater\n";  // in this runtime context compiler will choose to evaluate at compile or runtime
    const int g { greater(x, y) };
    std::cout << g << "\n";     // so in this case its definitely compile time

    std::cout << compileTime(greater(x,y)) << "\n"; // force compiler to run this variable in compile time

    constexpr int gg { doSomething(x, y) };
    std::cout << gg << "\n";

    return 0;
}
