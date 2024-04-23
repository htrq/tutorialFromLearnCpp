#include "ask_for_age.h"

void ask_and_return_biggest_of_two_ages()
{
    std::cout << "Enter first person name: ";
    std::string name1{};
    std::getline(std::cin >> std::ws, name1);
    std::cout << "Enter age of the first person: ";
    int age1{};
    std::cin >> age1;

    std::cout << "Enter second person name: ";
    std::string name2{};
    std::getline(std::cin >> std::ws, name2);
    std::cout << "Enter age of the second person: ";
    int age2{};
    std::cin >> age2;

    printOlder(name1, age1, name2, age2);
}

void printOlder(std::string_view name1, int age1, std::string_view name2, int age2)
{
    if (age1 > age2)
        std::cout << name1 << "(" << age1 << ") years is older than " << name2 << "(" << age2 << ") on " << age1 - age2 << " years\n";
    else if (age2 > age1)
        std::cout << name2 << "(" << age2 << ") years is older than " << name1 << "(" << age1 << ") on " << age2 - age1 << " years\n";
    else
        std::cout << name1 << "(" << age1 << ") is the same years old as " << name2 << "(" << age2 << ")\n";
}


