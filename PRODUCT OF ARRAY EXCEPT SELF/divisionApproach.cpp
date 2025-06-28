#include <bits/stdc++.h>
using namespace std;
// USING DIVISION EVEN THOUGH HAS NOT BEEN ASKED

int main() {
    vector <int> arr = {1, 2, 3, 4};
    vector <int> ans;
    int product = 1;

    for (int i = 0; i < arr.size(); i++){
        product *= arr[i];
    }

    for (int i = 0; i < arr.size(); i++){
        int cp = product / arr[i];
        ans.push_back(cp);
    }
    
    for (int val: ans){
        cout << val << " ";
    }
    return 0;
}