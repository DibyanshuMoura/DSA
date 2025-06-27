#include <bits/stdc++.h>
using namespace std;

int minOfTwo(int a, int b){
    return (a>b)? b : a;
}

int main() {
    cout << minOfTwo(10,5);
    return 0;
}