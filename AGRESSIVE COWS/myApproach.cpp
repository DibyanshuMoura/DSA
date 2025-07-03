#include <bits/stdc++.h>
using namespace std;

bool canPlaceCows(vector <int> stalls, int totalCows, int minimumDistance){
    int cows = 1, lastPosition = stalls[0];
    
    for (int i = 0; i < stalls.size(); i++){
        if (stalls[i] - lastPosition >= minimumDistance){
            lastPosition = stalls[i];
            cows++;
        }
        if (cows == totalCows) return true;
    }
    
    return false;
}

int agressiveCows(vector <int> stalls, int totalCows){
    sort (stalls.begin(), stalls.end());    
    int ans;
    int start = 0;
    int end = (stalls[stalls.size() - 1] - stalls[0]);
    while (start <= end){
        int mid = start + (end - start) / 2;
        
        if (canPlaceCows(stalls, totalCows, mid)){
            ans = mid;
            start = mid + 1;
        }
        else 
            end = mid - 1;
    }
    return ans;
}

int main(){
    vector <int> arr = {1, 2, 8, 4, 9};
    int cows = 3;   
    
    cout << agressiveCows(arr, cows);
    
    return 0;
}