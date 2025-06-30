#include <bits/stdc++.h>
using namespace std;

int optimisedSingleElement(vector <int> nums){

    int start = 0, end = nums.size() - 1;
    while (start <= end){

        int mid = start + (end - start) / 2;

        if (mid == 0 && nums[mid] != nums[mid + 1])
            return nums[mid];

        if (mid == nums.size() - 1 && nums[nums.size() - 1] != nums[nums.size() - 2])
            return nums[nums.size() - 1];

        if ( nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
            return nums[mid];

        else if (mid % 2 == 0)
            if (nums [mid - 1] == nums[mid])
                end = mid - 1;
            else    
                start = mid + 1;

        else    
            if (nums[mid - 1] == nums[mid])
                start = mid + 1;
            else 
                end = mid - 1;
    }

    return -1;
}
int main() {
    vector <int> nums = {1, 2, 2, 3, 3, 4, 4, 8, 8};   

    cout << optimisedSingleElement(nums) << endl;

    return 0;
}