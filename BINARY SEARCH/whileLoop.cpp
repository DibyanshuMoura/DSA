#include <bits/stdc++.h>
using namespace std;
int seachBinary(vector <int> arr, int target){
    int start = 0, end = arr.size() - 1;
    while (start <= end){
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            end = mid - 1;
        else 
            start = mid + 1;
    }
    return -1;
}
int main() {
    vector <int> arr = {1, 4, 5, 7, 8, 9};
    int target = 10;
    cout << seachBinary(arr, target) << endl;
    return 0;
}