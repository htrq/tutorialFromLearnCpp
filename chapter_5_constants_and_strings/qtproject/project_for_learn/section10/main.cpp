#include <iostream>
#include <string>
#include <string_view>
#include <type_traits>
#include <math.h>

void printStringView(std::string_view str)
{
    if (std::__is_constant_evaluated())
        std::cout << "function is somehow constant!\n"; // this row i've added just to check if c++20 flag works
    else
        std::cout << str << '\n';
}


int main()
{
    using namespace std::literals;  // makes s literals
    //using namespace std::string_view_literals;  // makes sv literals

    std::string some_variable{ "text here " };   // copy initialzation is slow unlike fundamential variables
    std::cout << some_variable << '\n';

    std::string_view some_variable2{ "text here 2" };
    printStringView(some_variable2);    // we're not creating copies of the string so its more efficient
    // best practice is to prefer string_view over string when you need just read-only variable

    std::string_view some_variable3{ some_variable };   // can be initalized with string
    std::cout << some_variable3 << '\n';

    std::string some_variable4{ "read-only text" };
    std::string_view some_variable5 { some_variable4 };  // now viewing string we put in braces
    some_variable5 = "random text"; // not changing variable but viewing another literal
    std::cout << some_variable4 << '\n';    // read-only text
    std::cout << some_variable5 << '\n';    // random text



    std::string_view name { "yapee"s };  // its not okay to initialize sv with string literal but okay with c-string type
    std::cout << name << '\n';           // may lead to undefinded behavior because initializer string destoyed

    std::string name2 { "1text" };
    std::string_view view_name2 { name2 };
    name2 = "!!!2text!!!";  // !!!2t definitely undefined behavior here
    std::cout << view_name2 << '\n';

    // and finally in the end there is some modification functions for string variables
    name.remove_suffix(1);
    name.remove_prefix(1);
    std::cout << name << '\n';  // ape

    return 0;
}
