#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> arr = {7, 1, 5, 3, 6, 4};
    int bestBuy = arr[0], maxProfit = 0;
    for (int i = 1; i < arr.size(); i++){
        if (arr[i] > bestBuy)
            maxProfit = max(maxProfit, arr[i] - bestBuy);
        bestBuy = min(arr[i], bestBuy); 
    }
    cout << maxProfit << endl;
    return 0;
}   