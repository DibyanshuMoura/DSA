#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int nCr(int n, int r){
    return ( fact(n)/ (fact(r) * fact(n - r)) );
}
int main() {    
    cout << nCr(8, 2) << endl;
    cout << nCr(6, 3) << endl;
    return 0;
}