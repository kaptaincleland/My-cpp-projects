#include<iostream>
#include<random>
using namespace std;

int main (){
    default_random_engine engine;
    engine.seed(random_device{}());
    uniform_int_distribution<int>distribution(0, 100);

    cout << "Welcome To The Love Calculator!"<< endl;
    cout << "How Much In love Are You And Your Crush"<< endl;

    cout << "Enter Your Name:";
    string yourName;
    cin >> yourName;

    cout << "Enter Your Crushe's Name:";
    string crushName;
    cin >> crushName;

    int love_percentage = distribution(engine);

    cout << "You And " << crushName << " Are " << love_percentage << "% Made For Each Other!"<< endl;

    if (love_percentage > 75) {
        cout << "You Two Were Made For Each Other Since Birth" << endl;
    } else if (love_percentage > 45) {
        cout << "You two have a strong connection but....its not meant to be." << endl;
    } else {
        cout << "Masa You go chop BOUNCE!!" << endl;
    }
    
    return 0;
}