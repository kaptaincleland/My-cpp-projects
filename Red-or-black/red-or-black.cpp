#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

int main () {
    srand(time(0));
    
    int run = 1;
    while (run != 0) {
        string userPick;
        int randomNumber = rand() % 2;

        string computerPick = (randomNumber == 0) ? "Red" : "Black";

        cout << "Enter your choice(Red/Black) or 0 to quit: " << endl;
        cin >> userPick;
        
        if (userPick == "0") {
            run = 0;
            cout << "Quiting... Thanks for playing!" << endl;
        } else {
            for (char &c : userPick) {
                c = toupper(c);
            }
            for (char &c : computerPick) {
                c = toupper(c);
            }
            if (userPick == computerPick) {
                cout << "\nYou Won. Computer chose: "<< computerPick << endl;
            } else {
                cout << "You Lost. Computer chose: " << computerPick << endl;
            }
        }
    }

    return 0;
}