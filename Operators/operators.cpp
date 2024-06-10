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

    cout << "The sum is: " << answer << endl;
    
    bool name = firstNumber > secondNumber;
    cout << name << endl;
    return 0;
}
