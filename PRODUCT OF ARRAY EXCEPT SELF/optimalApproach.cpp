#include <bits/stdc++.h>
using namespace std;
// THE OPTIMAL APPROACH USING THE PREFIX AND SUFFIX
int main() {
    vector <int> nums = {1, 2, 3, 4};
    vector <int> ans;
    int prefix = 1;  
    int suffix = 1;
    for (int i = 0; i < nums.size(); i++){
        ans.push_back(prefix);
        prefix *= nums[i];
    }
    for (int i = nums.size() - 1; i >= 0; i--){
        ans[i] *= suffix;
        suffix *= nums[i];
    }  
    for (int val: ans){
        cout << val << " ";
    }
    return 0;
}