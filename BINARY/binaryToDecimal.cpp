#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(int bin){
    int deci = 0, rem = 0, pow = 1;
    while( bin > 0 ){
        rem = bin % 10;
        bin /= 10;
        deci += rem * pow;
        pow *= 2;
    }
    return deci;
}
int main() {
    cout << binaryToDecimal(1100);
    return 0;
}