#include "section2/section2.h"
#include "section3/section3.h"
#include "section5/section5.h"
#include "section6/section6.h"

#include <iostream>
                        // dont ever use extern when creating non-const variable or compile will think you're making forward declaration
extern int g_xxx;       // forward declaration from section 7
extern const int g_yyy; // extern means variables declared somewhere else

int main()
{
    std::cout << "Choose section: ";
    int input{};
    std::cin >> input;
    if ( input == 2 )
        section2();
    if ( input == 3 )
        section3();
    if ( input == 5 )
        section5();
    if ( input == 6 )
        section6();
    if ( input == 7 )
        std::cout << g_xxx << ' ' << g_yyy << '\n';


    return 0;
}
