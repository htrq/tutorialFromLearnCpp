#include<iostream>

int getValue(void)
{
    int x{};
    std::cin >> x;

    return x;
}


int main()
{
    std::cout << getValue() << '\n';
    std::cerr << "hello cerr here!\n";
    return 0;
}