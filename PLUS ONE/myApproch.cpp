#include <bits/stdc++.h>
using namespace std;
//THE LOOP WILL RUN IN REVERSE BECAUSE IN MATH THE CALCULATION HAPPENS FROM THE RIGHT SIDE AND CARRIES TO THE LEFT SIDE
vector <int> plusOne(vector <int>& nums){
    for (int i = nums.size() - 1; i >= 0; --i){
        //IF THE NUMBER IS NOT EQUAL TO NINE THEN WE SIMPLY ADD 1 TO LAST ONE AND RETURN THE ARRAY
        if(nums[i] != 9){
            nums[i]++;
            return nums;
        }
        //HOW EVER IF IT IS 9 THEN WE MAKE THAT POSITION 0 AND ADD PLUS ONE TO THE NEXT INDEX AND THE RETURN THE ARRAYB
        nums[i] = 0;
    }
    //IF ALL THE NUMBERS ARE 9 THEN THEIR IS A NEED TO INSERT A 1 AT THE LEFTMOST SIDE OR INDEX 1.
    nums.insert(nums.begin(), 1);
    return nums;
}
int main() {
    vector <int> nums = {1, 2, 3, 4, 5};
    cout << "Before plus one: " << endl;
    for (int val: nums){
        cout << val << " "; 
    }
    plusOne(nums);   
    cout << "\nAfter plus one: " << endl;
    for (int val: nums){
        cout << val << " "; 
    }
    return 0;
}