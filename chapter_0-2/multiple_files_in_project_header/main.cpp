#include<iostream>
#include "add.h"
#define DEBUG
#define MY_NAME "Misha"

int main()
{
    // #ifdef DEBUG
    std::cout << std::unitbuf;  // enable automatic flushing for std::cout (for debugging)
    // #endif
    std::cout << MY_NAME << " counted: " << add(3,5) << "\n";
    return 0;
}