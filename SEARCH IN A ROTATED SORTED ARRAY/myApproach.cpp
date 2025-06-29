#include <bits/stdc++.h>
using namespace std;
//MODIFIED FORM OF BINARY SEARCH
int search(vector <int> nums, int target){
    int start = 0, end = nums.size() - 1;
    while(start <= end){
    int mid = start + (end - start) / 2;
    if (nums[mid] == target)
        return mid;
//CHEACKING IF LEFT OR RIGHT HALF IS SORTED
    else if (nums[start] <= nums[mid]){
//CHECKING IF THE TARGET IS IN SORTED LEFT HALF 
        if (nums[start] <= target && target <= nums[mid])
            end = mid - 1;
        else 
            start = mid + 1;
    }
    else
//CHECKING IF THE TARGET IS IN SORTED RIGHT HALF    
        if (nums[mid] <= target && target <= nums[end])
            start = mid + 1;
        else 
            end = mid - 1;
    }
    return -1;
}
int main() {
    vector <int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 2;
    cout <<  search(arr, target) << endl; 
    return 0;
}