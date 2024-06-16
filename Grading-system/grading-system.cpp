/*write a program that would accept the mark of a user once accepted grade as follow
A = 100-70
B = 69-60
C = 59-50
D = 49-40
E = 39-30
F = 29-0*/
/*NESTA CLELAND OKINE
  (ID)170056217
  BIT GROUP C*/
#include <iostream>
using namespace std;

int main () {
    int mark;
    char grade;

    cout << "Enter your mark: ";
    cin >> mark;

    if (mark >= 70) {
        grade = 'A';
    } else if (mark >= 60) {
        grade = 'B';
    } else if (mark >= 50) {
        grade = 'C';
    } else if (mark >= 40) {
        grade = 'D';
    } else if (mark >= 30) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    cout << "Your Grade for the mark "<< mark << " is "<< grade << endl;
    return 0;
}