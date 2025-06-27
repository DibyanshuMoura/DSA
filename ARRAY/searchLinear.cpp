#include <bits/stdc++.h>
using namespace std;

int searchLinear(int arr[], int size, int target){
    for (int i = 0; i < size; i++){
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {12, 45, 9, 78, 34, 51};
    int target = 33;
    int targetIndex = searchLinear(arr, 6, target);
    if (targetIndex != -1)
        cout << "The target element is found at index " << targetIndex << " of the array.\n";
    else 
        cout << "Element not found in the array.\n";
    return 0;
}