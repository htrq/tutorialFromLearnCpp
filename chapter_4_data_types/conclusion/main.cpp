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

    switch(operation)
    {
    case '+':
        std::cout << n1 + n2 << "\n";
        break;
    case '-':
        std::cout << n1 - n2 << "\n";
        break;
    case '*':
        std::cout << n1 * n2 << "\n";
        break;
    case '/':
        std::cout << n1 / n2 << "\n";
        break;
    default:
        std::cout << "wrong operation was provided\n";
        break;
    }

    // task 3

    return 0;
}
