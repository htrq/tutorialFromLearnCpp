#include<iostream>
#define MY_NAME "Misha"
//after preprocessor above line will be removed and definition MY_NAME will be replaced by value

int main()
{
    std::cout << "My name is " << MY_NAME << "\n";
    return 0;
}