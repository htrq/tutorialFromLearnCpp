#include<iostream>
#include <list>
using namespace std;

int main() {
    cout << "Hello world!" << endl; //this is the first row
    cout << "How r u?" << endl;     //this is the second row

    //here is "direct initialzation"
    int c(3.5);   
    cout << c << endl;

    //in other side is "copy initialzation"
    int b = 5;
    cout << b << endl;

    //But there is also "list initialzation" below:
    //"direct list initialzation"
    list<int> width{5, 6, 7};
    //"copy list initialzation"
    int height = {6};
    //"value initialzation"
    int depth{};    //the value will be placed with zero


    cout << "Output list initalized values:" << endl;
    for (int i : width) 
    {
        cout << i << endl;
    }
    cout << height << endl;
    cout << depth << endl;


    int x{}, y{};
    cout << "Enter number two pls: ";
    cin >> x >> y;
    cout << "Entered numbers is: " << x << " " << y;
}