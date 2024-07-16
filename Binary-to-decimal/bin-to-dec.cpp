#include <iostream>
using namespace std;

int binToDecimal(string binary) {
    int decimal = 0;
    for(char digits : binary) {
        decimal = decimal * 2 + (digits - '0');
    }
    return decimal;
}
int main () {
    string binary;
    
    cout << "Enter Binary Numbers: ";
    cin >> binary;
    
    int decimal = binToDecimal(binary);

    cout << "Decimal of " << binary << " is: " << decimal << endl;
    return 0;
}