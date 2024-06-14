#include <iostream>
#include <Windows.h>
#include <cctype>

int wmain()
{
    while (true)
    {
        
        for (int i = 0; i < 256; i++)
        {
            if (GetAsyncKeyState(i) & 0b1)
            {
                if(std::isupper(i))
                    std::cout << (char)i;
                else if (i == VK_LEFT)
                    std::cout << "LEFT";
                else if (i == VK_RIGHT)
                    std::cout << "RIGHT";
            }
        }
    }
    return 0;
}