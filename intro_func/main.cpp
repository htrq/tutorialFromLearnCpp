#include<iostream>
using namespace std;

void doPrint()
{
    cout << "This function is doing print\n";
}

int main() 
{
    for (int i = 0; i < 10; i++)
    {
        doPrint();
    }
    
    
    return 0;
}