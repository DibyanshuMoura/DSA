#include <bits/stdc++.h>
using namespace std;
//WE REVERSE TRAVERSE THE ARRAY AND THEN COMPARE THE LAST ELEMENTS OF BOTH THE ARRAYS AND THE GREATER ONE GOES AT THE LAST OF THE 1ST ARRAY THAT HAS A POINTER PLACING TO THAT POSITION
void mergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int nums1Iterator = m - 1, nums2Iterator = n - 1, elementPlace = m + n - 1;
    while (nums1Iterator >= 0 && nums2Iterator >= 0){
        if (nums1[nums1Iterator] <= nums2[nums2Iterator]){
            nums1[elementPlace] = nums2[nums2Iterator];
            nums2Iterator--;
            elementPlace--;
        }
        else{
            nums1[elementPlace] = nums1[nums1Iterator];
            nums1Iterator--;
            elementPlace--;
        }
    }
    // IF ALL THE ELEMENTS OF 1ST ARRAY ARE GREATER THAN B THEN THE 2ND ARRAYS ELEMENTS ARE THE NOT PLACED SO TO PLACE THEM WE USE THIS EXTRA WHILE LOOP
    while(nums2Iterator >= 0){
        nums1[elementPlace] = nums2[nums2Iterator];
        nums2Iterator--;
        elementPlace--;
    }
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