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

int multiplyTwoNumbers(int x, int y)
{
    return x * y;
}

int main()
{
    int numToDouble{};
    printDouble(getValueFromUser());
    cout << sumTwoNumbers(5, 10) << "\n";
    cout << multiplyTwoNumbers(2, sumTwoNumbers(multiplyTwoNumbers(10, 10), multiplyTwoNumbers(30, 30))) << "\n";
    cout << "Enter value that need to double: ";
    cin >> numToDouble;
    cout << multiplyTwoNumbers(numToDouble, 2) << "\n";

    return 0;
}