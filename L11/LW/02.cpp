#include <bits/stdc++.h>
using namespace std;
//TWO POINTER APPROACH
int main() {
    vector <int> arr = {2, 7, 11, 15};
    vector <int> ans;
    int target = 18;
    int start = 0;
    int end = arr.size() - 1;
    while (start < end){
        if (arr[start] + arr[end] > target)
            end--;
        else if (arr[start] + arr[end] < target)
            start++;
        else {
            ans.push_back(start);
            ans.push_back(end);
            break;
        }
    } 
    cout << ans[0] << " ";
    cout << ans[1] << endl;
    return 0;
}   