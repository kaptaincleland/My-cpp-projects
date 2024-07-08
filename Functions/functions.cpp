#include<iostream>
using namespace std;

int addition(int, int);

int main () {
    int a,b,c;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    c = addition(a,b);

    cout << "The value of C is " << c << endl;
    return 0;
}

int addition (int x, int y) {
    int c = x + y;
    return c;
}