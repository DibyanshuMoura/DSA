#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 3};
    for (int i = 0; i < 7; i++){
        bool isUnique = true;
        for (int j = 0; j < 7; j++){
            if (i != j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }
        if (isUnique)
            cout << arr[i] << " ";
    }
    return 0;
}