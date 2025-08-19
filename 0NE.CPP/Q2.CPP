#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isupper(ch))
        cout << "Uppercase";
    else
        cout << "Not Uppercase";
    return 0;
}
