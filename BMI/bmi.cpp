#include<iostream>
using namespace std;

int main () {
    double weight;
    double height;
    double bmi;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "Your Body Mass Index is: " << bmi << endl;

    if (bmi < 18.5){
        cout << "You are Underweight";
    } else if (bmi < 24.9) {
        cout << "You are Normal Weight";
    } else if (bmi < 29.9) {
        cout << "You are Overweight";
    } else if (bmi < 35) {
        cout << "You are Obese";
    } else {
        cout << "You are extremely Obese..like WTF you been doing with your body bro...Go to the GYYYMMM";
    }
    

    return 0;
}