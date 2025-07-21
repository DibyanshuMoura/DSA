#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[100] ;
    cout << "Enter character array using cin: ";
    cin >> str;//INPUTS ONLY ONE WORD UPTILL SPACE
    cout << str << endl;
    cin.ignore();//IGNORES THE \n OF THE OLD INPUT
    cout << "Enter character array using getline: ";
    cin.getline(str, 100);//THIS IS USED FOR CHARACTER ARRAY IN CPP NOT STRINGS
    cout << str << endl;
    return 0;
} 