#include <bits/stdc++.h>
using namespace std;
//BRUTEFORCE APPROACH
int main() {
    int arr[] = {2, 7, 11, 15};
    int target = 18;
    vector <int> ans;
    for (int i = 0; i < 4; i++){
        for (int j = i + 1; j < 4; j++){
            if (arr[i] + arr[j] == target)
                ans.push_back(i);
                ans.push_back(j);
        }
    }
    cout << ans[0] << " ";
    cout << ans[1] <<endl;
    return 0;
}   