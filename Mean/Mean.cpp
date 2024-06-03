#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip>
#include<numeric>
using namespace std;

double geometricMean (const vector<double>& data ) {
    if (data.empty()) {
        return 0.0;
    }
    double sumLogs = 0.0;
    int n = data.size();
    
    for (int i = 0; i < n; i++) {
        if (data[i] <= 0) {
            continue;
        }
        if (isnan(data[i])) {
            continue; 
        }
        sumLogs += log(data[i]);
    }
    if (n == 1) {
        return data[0];
        }
    
    return exp(sumLogs / n);
}

double arithmeticMean (const vector<double>& data ) {
    double sum = 0.0;
    int n = data.size();

    for (int i = 0; i < n; i++) {
        sum += data[i];
    }

    return sum / n;
}

double harmonicMean (const vector<double>& data) {
    double sumReciprocals = 0.0;
    int n = data.size();

    for (int i = 0; i < n; i++) {
        sumReciprocals += 1.0 / data [i];
    }

    return n /sumReciprocals;
}
int main () {
    vector<double> data;
    double value;

    cout << "Enter values (enter '0' to finish): ";
    
    while (true) {
        cin >> value;
        if (value == 0) {
            break;
        }
        data.push_back(value);
    }
    
    double geometricMeanResult = geometricMean(data);
    double arithmeticMeanResult = arithmeticMean(data);
    double harmonicMeanResult = harmonicMean(data);
    
    cout << "The Arithmetic mean is: " << fixed << setprecision(2) << arithmeticMeanResult << endl;
    cout << "The Geometric mean is: " << fixed << setprecision(2) << geometricMeanResult << endl;
    cout << "The Harmonic mean is: " << fixed << setprecision(2) << harmonicMeanResult << endl;

//wait for user input before closing
cout << "Press Enter to close....";
cin.ignore();
cin.get();
    return 0;
}
