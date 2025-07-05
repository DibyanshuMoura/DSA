#include <iostream>
using namespace std;
//THE LOGIC IS THAT THE BITS OF A NUMBER THAT IS POWER OF 2 AND ITS PREVIOUS NUMBER ARE COMPLEMENTS
bool checkPowerOfTwo(int n){
    return n > 0 && (n & (n - 1)) == 0;
}
int main() {
    int n = 1;
    cout << checkPowerOfTwo(n) << endl;
    return 0;
}