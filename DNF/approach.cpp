#include <bits/stdc++.h>
using namespace std;
// The DNF (Dutch National Flag) algorithm is used to sort an array with only 0s, 1s, and 2s using three pointers efficiently.
void dutchNationalFlag(vector <int> &arr){
    int start = 0, mid = 0, high = arr.size() - 1;
    while(mid <= high){
        if (arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
        else if (arr[mid] == 0){
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
        else{
            mid++;
        }
        cout << "start=" << start << ", mid=" << mid << ", high=" << high << "\n";
        
    }
}

int main() {
    vector <int> arr = {2, 0, 2, 1, 1, 0};

    dutchNationalFlag(arr);

    for (int val: arr){
        cout << val << " ";
    }

    return 0;
}