#include <iostream>
using namespace std;
/*Name: Nesta Cleland Okine
  Index Number: 17005612217
  Programe: BsC Information Technology*/

int averageTemp(int minimumTemp, int maximumTemp) {
  
  return (maximumTemp + minimumTemp) / 2;
}
int main () {

    int maximumTemp, minimumTemp;

    cout << "Enter the maximum temperature of Today: ";
    cin >> maximumTemp;

    cout << "Enter the minimum temperature of Today: ";
    cin >> minimumTemp;

    cout << "The Average Temperature of Today is " << averageTemp(maximumTemp,minimumTemp) << " Degree Celcius" << endl;

    return 0;
}