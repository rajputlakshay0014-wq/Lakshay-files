#include <iostream>
#include <string>
using namespace std;
int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;
    if (password == "admin123")
        cout << "Welcome";
    else
        cout << "Wrong Password";
    return 0;
}
