#include<iostream>
using namespace std;

int getValueFromUser()
{
    int value{};
    cout << "Enter value: ";
    cin >> value;
    return value;
}

void printDouble(int num)
{
    cout << "Doubled value is: " << num * 2 << "\n";
}

int sumTwoNumbers(int x, int y)
{
    return x + y;
}

int main()
{
    printDouble(getValueFromUser());
    cout << sumTwoNumbers(5, 10) << "\n";
}