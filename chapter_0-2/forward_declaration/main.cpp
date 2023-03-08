#include<iostream>
using namespace std;

int add(int a, int b);  // it's forward declaration or function prototype
// int add(int, int); also would be valid declaration

int main() 
{
    cout << add(3,4) << "\n";
    return 0;
}

int add(int a, int b) 
{
    return a + b;
}