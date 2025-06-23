#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max = arr[0], min = arr[0], maxI, minI;
    for (int i = 1; i < n; i ++){
        if (arr[i] > max){
            max = arr[i];
            maxI = i;
        }else if (arr[i] < min){
            min = arr[i];
            minI = i;
        }
    }
    
    cout << "The max and min elements of the array are " << max << " and " << min << ".\n";
    cout << "The max and min elements of the array are at the index " << maxI << " and " << minI << ".\n";
    return 0;
}