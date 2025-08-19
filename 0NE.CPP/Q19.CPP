#include <iostream>
using namespace std;
int main() {
    int fuel;
    cout << "Enter fuel type (1=Petrol, 2=Diesel, 3=Electric): ";
    cin >> fuel;
    switch (fuel) {
        case 1: cout << "Petrol"; break;
        case 2: cout << "Diesel"; break;
        case 3: cout << "Electric"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
