#include <bits/stdc++.h>
using namespace std;
//CHANGES IN THE BRUTE FORCE APPROACH
int main(){
int arr[7] = {3, -4, 5, 4, -1, 7, -8};
int maxSum = 0;
for (int start = 0; start < 7; start++){
    int currentSum = 0;
    for (int end = start; end < 7; end ++){
        currentSum += arr[end];
        maxSum = max(maxSum, currentSum);
    }
}
cout << maxSum << endl;
return 0;
}