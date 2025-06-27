#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if ( 65 <= ch <= 90) 
        cout << "The letter enterd is Uppercase.\n";
    else
        cout << "The letter enterd is Lowercase.\n";
    return 0;
}