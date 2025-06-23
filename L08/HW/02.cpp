#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0, product = 1;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
        product *= arr[i];
    }
    cout << "The product and sum of all the elements in the array is " << sum << " and " << product << " respectively.\n";
    return 0;
}