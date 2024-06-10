#include<iostream>
using namespace std;

int main () {
    int firstNumber;
    int secondNumber;
    int answer;
    
    cout << "Enter first Number: ";
    cin >> firstNumber;

    cout << "Enter second Number: ";
    cin >> secondNumber;

    answer = firstNumber + secondNumber;

    if (firstNumber > secondNumber) {

        cout << "The first number is bigger" << endl;
    } /*else {
        cout << ""
    }*/
    if (secondNumber > firstNumber) {
        
        cout << "The second number is greater" << endl;
    }

    return 0;
}

