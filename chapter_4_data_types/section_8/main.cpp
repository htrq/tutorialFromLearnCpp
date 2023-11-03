#include <iostream>

int main()
{
    int x{ 5 };
    double y{ 5.0 };
    float z{ 6.0f };    // to float we have to clearify type with f prefix to avoid unnecessary convertions

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << z << "\n";
    std::cout << 553544321.86 << "\n";  // this literal will be printed in scientific notation (5.53544e+08)

    float valuef{ 545.120695043f }; // this value's output will be with 6 significat digits
    std::cout << valuef << "\n";
    double valued{ 5.897654120695043 }; // this too
    std::cout << valued << "\n";

    return 0;
}