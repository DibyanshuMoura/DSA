#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++ ){
        if (n % i == 0)
            cout << "The number is not prime.\n";
        else
            cout << "The number is prime.\n";
    }   
    return 0;
}