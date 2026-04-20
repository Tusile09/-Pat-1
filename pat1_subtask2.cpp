#include <iostream>
using namespace std;

int main() {
    int temp1, temp2, temp3;
    // Input first temperature
    cout << "Enter first temperature reading: ";
    cin >> temp1;

    // Input second temperature
    cout << "Enter second temperature reading: ";
    cin >> temp2;
 // Check difference between first and second reading
    if (temp2 - temp1 > 50) {
        cout << "Reduce fryer heat before taking the third reading." << endl;
    } 
    else if (temp2 - temp1 < 10) {
        cout << "Increase the fryer heat before taking the third reading." << endl;
    }
