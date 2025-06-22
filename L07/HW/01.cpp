#include <bits/stdc++.h>
using namespace std;
bool powerOfTwo(int n){
    return (n > 0) && ((n & (n-1)) == 0);
}
int main() {
    int n  = 15;
    if(powerOfTwo(n))
        cout << "The number is power of 2.\n";
    else    
        cout << "The number is not a power of 2.\n";
    return 0;
}