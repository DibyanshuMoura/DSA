#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            sum += i;
    }
    cout << "The sum of odd numbers from 1 to n is " << sum << ".\n";
    return 0;
}