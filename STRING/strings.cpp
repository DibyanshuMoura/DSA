#include <bits/stdc++.h>
using namespace std;

int main() {
    //STRINGS ARE DYNAMIC AND CONTIGUOUS IN NATURE
    string str1;
    string str2;

    cout << "Enter string 1: ";
    cin >> str1;// IN STRINGS ALSO CIN ONLY INPUTS THE STRING UPTIL THE FIRST SPACE

    cin.ignore();

    cout << "\nEnter string 2: ";
    getline(cin, str2);// THE GETLINE FUNCTION IS ALSO USED IN STRINGS TO TAKE INPUT AS A WHOLE EVEN AFTER SPACES

    cout << str1 << endl;
    cout << str2 << endl;
    
    return 0;
}