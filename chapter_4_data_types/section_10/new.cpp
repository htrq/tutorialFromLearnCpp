#include <iostream>

void number_prime_checker(int value)
{
    int divider_counter{};
    for (int i = 1; i < 10; i++)
    {
        if (value % i == 0)
            divider_counter+=1;
    }
    if (divider_counter > 2)
    {
        std::cout << "number: " << value << " is not prime!\n";
    }
    else 
    {
        std::cout << "number: " << value << " is prime!\n";
    }
}

int main()
{
    int value{};
    std::cout << "Enter value: ";
    std::cin >> value;
    number_prime_checker(value);
    return 0;
}