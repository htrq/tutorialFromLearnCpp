#include<iostream>
using namespace std;

int main() {
    int x{};

    cout << "Hello " "world\n" "Hello world\n"; //it also work with many quotes
    cout << "Enter number value: ";
    cin >> x;
    x *= 2;
    cout << "Doubled entered value is equal to: " << x << "\n";

    return 0;
}