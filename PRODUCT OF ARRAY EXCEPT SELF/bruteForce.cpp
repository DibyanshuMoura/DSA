#include <bits/stdc++.h>
using namespace std;
//BRUTEFORCE APPROACH USING TWO LOOPS, TC: O(n^2), SC: O(n)
int main() {
    vector <int> arr = {1, 2, 3, 4};
    vector <int> ans;
    for (int i = 0; i < arr.size(); i++){
        int product = 1;
        for (int j = 0; j < arr.size(); j++){
            if(i != j)
                product *= arr[j]; 
        }
        ans.push_back(product);
    }   
    for (int val: ans){
        cout << val << " ";
    }
    return 0;
}