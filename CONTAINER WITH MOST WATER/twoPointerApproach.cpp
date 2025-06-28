#include <bits/stdc++.h>
using namespace std;
//TWO POINTER APPROACH 
int main() {
    vector <int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int left = 0, right = arr.size() - 1, maxArea = 0;
    while (left < right){
        int currentArea = min(arr[left], arr[right]) * (right - left);
        //TO INCREASE THE CURRENT VOLUME WE NEED TO CHANGE THE POINTER WHOSE HEIGHT IS SMALLER CAUSE CHANGING THE BIGGER ONE DOES NOT CHANEGE ANYTHING
        (arr[left] < arr[right]) ? left++ : right--; 

        maxArea = max (currentArea, maxArea);
    }
    cout << maxArea << endl;
    return 0;
}