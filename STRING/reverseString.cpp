#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Orignal String: " << str << endl;

    reverse(str.begin(), str.end());//REVERSE FUNCTION FOR STRING IS USED TO REVERSE THE STRING

    cout << "Reverse String: " << str << endl;   
    
    return 0;
}