#include <bits/stdc++.h>
using namespace std;
//MAXIMUM SUBARRAY SUM BRUTEFORCE APPROACH
int main() {
int arr[7] = {3, -4, 5, 4, -1, 7, -8};
int maxSum = 0; 
for (int start = 0; start < 7; start++){
    for (int end = start; end < 7; end++){
        int currentSum = 0;
        for (int i = start; i <= end; i++){
            currentSum += arr[i];
            if (maxSum < currentSum)
                maxSum = currentSum;
        }
    }
}
cout << maxSum << endl;
return 0;
}