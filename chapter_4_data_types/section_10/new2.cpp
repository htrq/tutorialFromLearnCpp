#include <iostream>

bool isAllowedToRide()
{
    double height{};
    std::cout << "Enter your height (cm): ";
    std::cin >> height;
    return (height >= 140);

}

int main()
{
    if (isAllowedToRide())
        std::cout << "Welcome in buddy!\n";
    else
        std::cout << "Youre too short :-( \\n";
    return 0;
}