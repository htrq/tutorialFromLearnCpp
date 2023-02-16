#include<iostream>
using namespace std;

int main() {
    cout << "Hello world!" << endl; //this is the first row
    cout << "How r u?" << endl;     //this is the second row

    //here is "direct initialzation"
    int c(6);   
    cout << c << endl;

    //in other side is "copy initialzation"
    int b = 5;
    cout << b << endl;

    //But there is also "list initialzation" below:
    //"direct list initialzation"
    int width{5};
    //"copy list initialzation"
    int height = {6};
    //"value initialzation"
    int depth{};    //the value will be placed with zero
    cout << "Output list initalized values:" << endl;
    cout << width << endl;
    cout << height << endl;
    cout << depth << endl;


    int x{};
    cout << "Enter number pls: ";
    cin >> x;
    cout << "\n Entered number is: " << x << "\n";
}