#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character between a and d: ";   
    cin >> ch;
    switch (ch)
    {
    case 'a':
        cout << "You entered a.\n"; 
        break;
    case 'b':
        cout << "You entered b.\n";
        break;
    case 'c':
        cout << "You enterd c.\n";
        break;
    case 'd':
        cout << "You entered d.\n";
        break;
    default:
        cout << "You entered outside the given range.\n";
        break;
    }
    return 0;
}