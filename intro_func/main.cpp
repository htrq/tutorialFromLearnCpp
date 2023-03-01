#include<iostream>
using namespace std;

void sayHi()
{
    cout << "Hi\n";
    // return statement isn't needed 
    return;
}

int getFiveNumber()
{
    return 5;
}

int main()
{
    sayHi();
    // functions that provides some value can be used in cin and cout
    cout << getFiveNumber();

    return 0;
}
