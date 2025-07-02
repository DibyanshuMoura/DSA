#include <bits/stdc++.h>
using namespace std;

bool isValid(vector <int> arr, int maxPainters, int maxWorkUnit){
    int painters = 1, workUnit = 0;
    for (int i = 0; i < arr.size(); ++i){
        if (arr[i] > maxWorkUnit)
            return false;
        if (workUnit + arr[i] <= maxWorkUnit){
            workUnit += arr[i]; 
        }
        else{
            painters++;
            workUnit = arr[i];
        }
    }
    return (painters <= maxPainters)? true : false;
}

int paintersPartition(vector <int> arr, int maxPainters){
    int sum = 0, ans = 0;
    for (int i = 0; i < arr.size(); ++i){
        sum += arr[i];
    }
    int start = *max_element(arr.begin(), arr.end());
    int end = sum;
    while (start <= end){
        int mid = start + (end - start) / 2;
        if (isValid(arr, maxPainters, mid)){
            ans = mid;
            end = mid - 1;
        }
        else    
            start = mid + 1;
    }
    return ans;
}

int main(){
    vector <int> arr = {40, 30, 20, 10};
    int maxPainter = 2;   

    cout << paintersPartition(arr, maxPainter);
    
    return 0;
}