#include <iostream>

void number_prime_checker(int value)
{
    if (value % 2 == 0)
        std::cout << "number: " << value << " is prime!\n";
    else
        std::cout << "number: " << value << " is not prime!\n";
}

int main()
{
    std::cout << "Enter value: ";
    int value{};
    std::cin >> value;
    number_prime_checker(value);

    return 0;
}
