#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    if ( num <= 1 ) return false;
    for(int i = 2; i <= sqrt(num); i++){
        if (num % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPrime(n))
        cout << "The number entered is prime.\n";
    else
        cout << "The number entered is not prime.\n";
    return 0;
}