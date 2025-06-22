#include <bits/stdc++.h>
using namespace std;
int sumOfDigits(int num){
     int r = 0, dsum = 0;
    while(num > 0){
        r = num % 10;
        dsum += r;
        num /= 10;
    }
    return dsum;
}
int main() {
    cout << sumOfDigits(145);
    return 0;
}