#include <iostream>
using namespace std;
/*loops*/

/*int main () {
for loops
for ( int i = 0; i < 5; i++) {
    cout << "Enter a number: ";
    int number;
    cin >> number;  
    
    cout << number << endl;
}
int number;
number = 1;
while (number != 11) {
    cout << "Enter a number: ";
    cin >> number;  
    
    cout << number << endl;
}
int number;
do {
    cout << "Enter a number: ";
    cin >> number;  
    
    cout << number << endl;
} while (number != 11);
    return 0;
}*/

int main () {
    int degFahrenheit;
    int degCelsius;

    for (int i = 1; i < 5; i++) {
        cout << "Enter degrees in Fahrenheit: " << endl;
        cin >> degFahrenheit;

        degCelsius = (degFahrenheit - 32) * 5/9;
        
        cout <<"Degree in celsius: " << degCelsius << endl;
    }
    return 0;
}