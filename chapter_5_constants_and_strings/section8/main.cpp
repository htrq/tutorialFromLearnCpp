#include <iostream>

constexpr int greater(int x, int y)     // here is example of constival function
{
    return (x > y ? x : y);
}

int main()
{
    const int x { 30 }; // if we'll remove const its still goin to compile though constexpr declared
    const int y { 15 }; // it is done so you weren't have to dublicate functions with either const or not const return value

    std::cout << greater(x, y) << " is greater\n";  // in this runtime context compiler will choose to evaluate at compile or runtime
    const int g { greater(x, y) };
    std::cout << g << "\n";     // so in this case its definitely compile time
    return 0;
}
