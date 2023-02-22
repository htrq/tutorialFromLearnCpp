#include<iostream>
using namespace std;

int getValueFromUser()
{
    int value;
    cout << "Please, enter value: ";
    cin >> value;
    return value;
}

int main()
{
    int num{ getValueFromUser() };
    cout << "Entered value is: " << num << "\nProgramm ends\n";
    return 0;
}