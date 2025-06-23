#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 3, 1};
    for (int i = 0; i < 5; i++){
        bool isIntersection = false;
        for (int j = 0; j < 4; j++){
            if (arr1[i] == arr2[j]){
                isIntersection = true;
            }
        }
        if (isIntersection)
            cout << arr1[i] << " ";
    }   
    return 0;
}