#include <iostream>

bool isAllowedToRide()
{
    std::cout << "Enter your height (cm): ";
    double height{};
    std::cin >> height;

    return (height >= 140);
}

int main()
{
    if (isAllowedToRide())
        std::cout << "Welcome in buddy!\n";
    else
        std::cout << "Youre too short :-(\n";

    return 0;
}
