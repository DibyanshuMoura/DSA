#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, totalSum = 0;
    cout << "Enter the no. uptill which you want to calculate the sum of: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        totalSum += i;
    }   
    cout << "The total sum from 1 to n is " << totalSum << ".\n";
    return 0;
}