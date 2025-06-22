#include <bits/stdc++.h>
using namespace std;
int decimalToBinary(int n){
    int bin = 0, rem, pow = 1;
    while(n > 0){
        rem = n % 2;
        n /= 2;
        bin += rem * pow;
        pow *= 10;
    }
    return bin;
}
int main() {
    cout << decimalToBinary(12);
    return 0;
}