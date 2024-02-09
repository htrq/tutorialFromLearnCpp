#include <iostream>
#include <string>
#include <string_view>
#include <type_traits>

void printStringView(std::string_view str)
{
    if (std::__is_constant_evaluated())
        std::cout << "function is somehow constant!\n"; // this row i've added just to check if c++20 flag works
    else
        std::cout << str << '\n';
}

int main()
{
    std::string some_variable{ "text here " };   // copy initialzation is slow unlike fundamential variables
    std::cout << some_variable << '\n';

    std::string_view some_variable2{ "text here 2" };
    printStringView(some_variable2);    // we're not creating copies of the string so its more efficient
    // best practice is to prefer string_view over string when you need just read-only variable

    std::string_view some_variable3{ some_variable };   // can be initalized with string
    std::cout << some_variable3 << '\n';



    return 0;
}
