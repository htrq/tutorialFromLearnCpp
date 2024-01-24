#include <iostream>

int main()
{
    double numb { 404999.56789 };
    std::cout << "value of the numb variable is " << numb << "\n";
    std::cout << "its size is " << sizeof(numb) << "\n" << size_t(numb) << "\n";

    std::cout << sizeof(int16_t) << "\n";

    //task 2
    double n1 {};
    double n2 {};
    char operation {};
    std::cout << "Enter two numbers: ";
    std::cin >> n1;
    std::cin >> n2;

    std::cout << "Choose operation: + - * / " << "\n";
    std::cin >> operation;

    if (operation == '+')   // bro remember single quotes for char initailzation!
        std::cout << n1 + n2 << "\n";
    else if (operation == '-')
        std::cout << n1 - n2 << "\n";
    else if (operation == '*')
        std::cout << n1 * n2 << "\n";
    else if (operation == '/')
        std::cout << n1 / n2 << "\n";
    else
        std::cout << "wrong operation provided\n";

    return 0;
}
