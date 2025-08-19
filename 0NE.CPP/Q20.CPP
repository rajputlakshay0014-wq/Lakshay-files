#include <iostream>
using namespace std;
int main() {
    int drink;
    cout << "Choose Drink (1=Tea, 2=Coffee, 3=Juice): ";
    cin >> drink;
    switch (drink) {
        case 1: cout << "Tea"; break;
        case 2: cout << "Coffee"; break;
        case 3: cout << "Juice"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
