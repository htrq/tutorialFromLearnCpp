#include <iostream>

int main()
{
    char letter1 { 'a' }, letter2 { 97 }; // by the way it's more preffered to put character literals in single quotes it helps compiler work faster double quotes treated as string of multiple characters
    char example1{}, example2{};    //though it's not preffered to initialize like thatss
    std::cout << letter1 << " is the same as " << letter2 << '\n';


    // there is an important thing about cin queue 
    // char can only take one symbol so another left will be queued then next cin will take queued chars
    std::cout << "Enter value for two chars: ";
    std::cin >> example1;   // for example user enters 'abcd' this only takes first symbol 'a'
    std::cin >> example2;   // this cin will take queued symbol 'b'
    std::cout << "here is example1: " << example1 << '\n';
    std::cout << "here is example2: " << example2 << '\n';
    return 0;
}