#include "goto.h"
#include <iostream>

void try_goto_functionality(bool skip)
{
    if (skip)
        goto end_of_try;

    std::cout << "Котики\n";
end_of_try:
    ;   // null statement for goto because goto labels associated with statements
}

constexpr int another_example_with_goto()
{
    //goto skip;
    int x{ 5 };
    x += 50;
//skip:               // you cant jump over initialzations in function scope
    return x + 5;     // and goto is not const variable btw, you cant use constexpr here with goto labels
}

void goto_section()
{
    try_goto_functionality(true);
    try_goto_functionality(false);
    std::cout << "Notice you can't jump over variable initialzations: " << another_example_with_goto() << '\n';
}
