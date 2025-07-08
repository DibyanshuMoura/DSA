#include <bits/stdc++.h>
using namespace std;
//THIS APPROACH STARTS PUTTING THE ELEMENTS OF THE 2ND ARRAY FORM THE M(WHERE THE EMPTY SPACE STARTS) AND THEN AFTER THE ELEMENTS ARE IN THE 1ST ARRAY, WE SORT IT.
void mergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m , j = 0;
    while (i < nums1.size() && j < n){
        nums1[i] = nums2[j];
        i++;
        j++;
    }
    sort(nums1.begin(), nums1.end());
}

int main() {
    vector <int> arr1 = {1, 2, 3, 0, 0, 0};
    vector <int> arr2 = {2, 5, 6};

    mergeSortedArray(arr1, 3, arr2, arr2.size());

    for (int val: arr1){
        cout << val << " ";
    }

    return 0;
}