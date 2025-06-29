#include <bits/stdc++.h>
using namespace std;
int recursiveBinarySearch(vector <int> arr, int target, int start, int end){
    int mid = start + (end - start) / 2;
    if (start <= end){
        if (target == arr[mid])
            return mid;
        else if (arr[mid] > target)
            return recursiveBinarySearch(arr, target, start, mid - 1);
        else
            return recursiveBinarySearch(arr, target, mid + 1, end);
    }
    return -1;
}
int main() {
    vector <int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 12;
    cout << recursiveBinarySearch(arr, target, 0, arr.size() - 1) << endl;
    return 0;
}