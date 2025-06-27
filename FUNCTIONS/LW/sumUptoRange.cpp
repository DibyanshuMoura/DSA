#include <bits/stdc++.h>
using namespace std;
int sumRangeUpto(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}
int main() {
    int a;    
    cout << "Enter the range you want to do sum upto: ";
    cin >> a;
    cout << "The sum from 1 to the entered number is " << sumRangeUpto(a) << ".\n"  ;
    return 0;
}