#include <iostream>
#include "section_4/section_4.h"
#include "section_6/section_6.h"
#include "section_7/goto.h"
#include "section_8/while_problem.h"

int main()
{
    int input{};
    std::cout << "Choose chapter: ";
    std::cin >> input;

    switch (input) // finally came up with switch!
    {
    case 4:
        section_4();
        return 0;
    case 6:
        section_6();
        return 0;
    case 7:
        goto_section();
        return 0;
    case 8:
        while_problem();
        return 0;
    default:
        std::cout << "Unknown\n";
        return 0;
    }
}
