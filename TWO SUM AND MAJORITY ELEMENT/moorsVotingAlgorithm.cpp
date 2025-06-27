#include <bits/stdc++.h>
using namespace std;
//MOOR'S VOTING ALGORITHM
int main() {
    vector <int> arr = {0, 0, 1, 1, 1, 2, 2, 2, 2, 2};
    int freq = 0, ans = 0;
    for (int i = 1; i < arr.size(); i++){
        if (freq == 0){
            freq = 1;
            ans = arr[i];
        }
        if (ans == arr[i])
            freq++;
        else
            freq--;
    }  
    int count = 0;
    for (int val: arr){
        if (val == ans)
            count++;
    }
    if (count < arr.size()/2)
        ans = -1;
    cout << ans << endl;
    return 0;
}