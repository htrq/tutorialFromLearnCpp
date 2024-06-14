#include <iostream>
#include <Windows.h>

int wmain()
{
    int window_1 { MessageBox(0, L"content", L"title", MB_OKCANCEL) };
    if (window_1 == IDOK)
        std::cout << "OK!\n";
    else if (window_1 == IDCANCEL)
        std::cout << "Cancel\n";


    return 0;
}