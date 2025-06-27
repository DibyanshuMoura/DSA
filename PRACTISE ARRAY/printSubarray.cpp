#include <bits/stdc++.h>
using namespace std;
// PRINT ALL THE SUBARRAYS OF AN ARRAY 
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int start = 0; start < 5; start++){
        for (int end = start; end < 5; end++){
            for (int i = start; i <= end; i++){
                cout << arr[i];
            }
            cout << " ";   
        }
        cout << endl;
    }   
    return 0;
}