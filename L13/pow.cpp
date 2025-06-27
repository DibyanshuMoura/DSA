#include <bits/stdc++.h>
using namespace std;

double Pow(double x, int n){
    // For some base cases
    if (n == 0) return 1.0;
    if (x == 0) return 0.0;
    if (x == 1) return 1.0;
    if (x == -1 && n % 2 == 0) return 1.0;
    if (x == -1 && n % 2 != 0) return -1.0;
    // If the power is too great to be handled by int data type
    long long power = n;
    // If the power is negative
    if (power < 0){
        x = 1 / x;
        power = - power;
    }
    // Calulation of result 
    double result = 1.0;
    while (power > 0){
        if (power % 2 == 1)
            result *= x;
        power /= 2;
        x *= x;
    }

    return result;
}
int main() {
    cout << Pow(2.0, -2) << endl;
    return 0;
}