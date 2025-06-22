#include <bits/stdc++.h>
using namespace std;
int countDigits(int num){
    int count = 0;
    while(num > 0){
        num /= 10;
        count++;
    }
    return count;
}
int reverseInteger(int num){
    int count = countDigits(num);
    int revNum = 0, rem = 0;
    while(num > 0){
        rem = num % 10;
        num /= 10;
        revNum += rem * pow(10, count - 1);
        count--;
    }
    return revNum;
}
int main() {
    int n = 1234; 
    cout << reverseInteger(n);  
    return 0;
}