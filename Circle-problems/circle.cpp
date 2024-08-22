#include <iostream>
#include<cmath>
#include <math.h>
using namespace std;

double calculateArea(const double pi, double radius) {
    int area = pi * (radius * radius);
    return area;
}

double calculatePerimeter (const double pi, double radius) {
    int perimeter = 2 * pi * radius;
    return perimeter;
}

void printResults (double pi,double radius) {
    double area = calculateArea(pi,radius);
    double perimeter = calculatePerimeter(pi,radius);
    cout << "The Area is: " << area << endl;
    cout << "The Perimeter is: " << perimeter << endl;
}
int main() {
    const double pi = 3.14159;
    double radius;
    cout << "Enter the radius." << endl;
    cin >> radius;
    printResults(pi,radius);
    return 0;
}
