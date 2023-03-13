#include<iostream>

int getValueOfTheIntVariable();

void writeValueOfTheIntVariable(int value);

int main()
{
    int a{getValueOfTheIntVariable()};
    int b{getValueOfTheIntVariable()};
    writeValueOfTheIntVariable(a + b);
    return 0;
}