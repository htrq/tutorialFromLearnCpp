#include<iostream>
#include "add.h"
#define DEBUG

int main()
{
    // #ifdef DEBUG
    std::cout << std::unitbuf;  // enable automatic flushing for std::cout (for debugging)
    // #endif
    std::cout << add(3,5) << "\n";
    return 0;
}