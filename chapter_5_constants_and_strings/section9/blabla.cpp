#include <iostream>
#include <string>

int main()
{
    std::string someString{};
    std::cout << "Enter your string: \n";
    std::getline(std::cin >> std::ws, someString);  // std::ws ignores whitespaces even \n from previous input
    std::cout << "You've entered: " << someString << "\n";
    int length_of_string { static_cast<int>(someString.length()) };
    int size_of_string { static_cast<int>(std::ssize(someString)) };    // std::ssize is from c++ 20 function that acquire signed value
    std::cout << "The length of the string is: " << length_of_string << "\n";    // .length function to read length of std::string
    std::cout << "The size of the string is " << size_of_string << "\n";

    // double quotes mean that variable is c style strings
    // to point exactly what value are we going to use is to put suffix "s" from std::literals::string_literals
    // input only std::string_literals because you don't need anything else except suffixes
    using namespace std::string_literals;
    std::cout << "goo\n";   // this is a c-type string literal
    std::cout << "foo\n"s;  // this is a std::string literal
    return 0;
}
