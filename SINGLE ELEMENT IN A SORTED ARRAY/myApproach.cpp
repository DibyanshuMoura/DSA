#include <bits/stdc++.h>
using namespace std;
int singleElement(vector <int> nums){
    if (nums[0] != nums[1])
        return nums[0];

    if (nums[nums.size() - 1] != nums[nums.size() - 2])
        return nums[nums.size() - 1];

    for (int i = 0; i < nums.size(); i++){
        if (nums[i-1] != nums[i] && nums[i] != nums[i + 1])
            return nums[i];
    }
    
    return -1;
}
int main() {
    vector <int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << singleElement(arr) << endl;
    return 0;
}   