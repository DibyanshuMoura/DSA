 #include <bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    if ( num <= 1) return false;
    for(int i = 2; i <= sqrt(num); i++){
        if (num % i == 0)
            return false;
    }
    return true;
}
int main() {
    int range;
    cout << "Enter a range that you want to check the prime numbers of: ";
    cin >> range;
    for (int i = 2; i <= range; i++){
        if (isPrime(i))
            cout << i << endl;
    }   
    return 0;
}