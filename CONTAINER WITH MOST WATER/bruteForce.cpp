#include <bits/stdc++.h>
using namespace std;
//Calculate the current volume and compare it to the max volume everytime
int main() {
    vector <int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int maxVolume = 0;
    for (int i = 0; i < arr.size(); i++){
        for (int j = i + 1; j < arr.size(); j++){
            int currentVolume = min(arr[j], arr[i]) * (j - i);
            maxVolume = max(currentVolume, maxVolume);
        }
    }   
    cout << maxVolume << endl;
    return 0;
}