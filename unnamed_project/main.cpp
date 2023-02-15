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
}