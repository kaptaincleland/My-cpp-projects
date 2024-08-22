#include<iostream>
using namespace std;

int main() {
    double firstNum,secondNum;
    char op;
    cout << "Enter the first number and the second number in the format 'a+b|a-b|a*b|a/b': " << endl;
    cin >> firstNum >> op >> secondNum;

    double result;
    if (op == '+') {
        result = firstNum + secondNum;
    } else if (op == '-') {
        result = firstNum - secondNum;
    } else if (op == '*') {
        result = firstNum * secondNum;
    } else if (op == '/') {
        if (secondNum != 0) {
            result = firstNum / secondNum;
        } else {
            cout << "Error!:( can't devide by zero " << endl;
            return 1;
        }
    } else {
        cout << "Unsupported operator :( " << endl; 
    }

    cout << "Result = " << result << endl;
    return 0;
}
 