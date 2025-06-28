#include <bits/stdc++.h>
using namespace std;
//SUFFIX AND PREFIX APPROACH

int main() {
    vector <int> arr = {1, 2, 3, 4};
    vector <int> ans;
    for (int i = 0; i < arr.size(); i++){
        int prefix = 1;
        int suffix = 1;
        for (int j = 0; j < i; j++){
            prefix *= arr[j];
        }
        for (int j = arr.size() - 1; j > i; j--){
            suffix *= arr[j];
        }
        ans.push_back(prefix * suffix);
    }
    for (int val: ans){
        cout << val << " ";
    }
    return 0;
}