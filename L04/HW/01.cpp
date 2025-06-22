#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    char c = 'A';
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        for (int j = 0; j < n - i; j++){
            cout << c;
        }
        c++;
        cout << endl;
    }   
    return 0;
}