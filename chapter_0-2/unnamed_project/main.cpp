#include<iostream>
using namespace std;

int main() {
    int x{ };

    cout << "Hello " "world\n" "Hello world\n"; //it also work with many quotes
    cout << "Enter number value: ";
    cin >> x;
    cout << "Multiplied by 2 entered value is equal to: " << x * 2 << "\n";
    cout << "Multiplied by 3 entered value is equal to: " << x * 3 << "\n";

    return 0;
}