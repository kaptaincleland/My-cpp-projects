#include <iostream>
#include <string>
using namespace std;

int main () {
    const int MAX_NAMES = 5;
    string names[MAX_NAMES];
    
    cout << "Enter " << MAX_NAMES << " names: " << endl;

    for (int i = 0; i < MAX_NAMES; i++) {
        cout << "Name" << (i + 1) << ": ";
        cin >> names[i];
    }

    cout << "\nYou Entered the following names: " << endl;

    for (int i = 0; i < MAX_NAMES; i++) {
        cout << names[i] << endl;
    }
    return 0;
}