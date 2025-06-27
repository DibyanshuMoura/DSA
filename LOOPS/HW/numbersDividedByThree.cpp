#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10, sum = 0;
    for (int i = 1; i <= n; i++){
        if (i % 3 == 0)
            sum += i;
    }
    cout << "The sum of all the numbers which are divided by 3 is " << sum << ".\n";
    return 0;
}