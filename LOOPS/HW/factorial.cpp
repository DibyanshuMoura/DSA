#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, fact = 1;
    cout << "Enter a number of which you want the factorial of: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    cout << "The factorial of the entered number is " << fact << ".\n";
    return 0;
}