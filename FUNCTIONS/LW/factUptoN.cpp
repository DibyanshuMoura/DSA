#include <bits/stdc++.h>
using namespace std;
int factN(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int main() {
    cout << factN(5);
    return 0;
}