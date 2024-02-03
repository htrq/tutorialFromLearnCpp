#include<iostream>

int main() {
    int x{};

    std::cout << "Hello " "world\n" "Hello world\n"; //it also work with many quotes
    std::cout << "Enter number value: ";
    std::cin >> x;
    std::cout << "Multiplied by 2 entered value is equal to: " << x * 2 << "\n";
    std::cout << "Multiplied by 3 entered value is equal to: " << x * 3 << "\n";

    return 0;
}
