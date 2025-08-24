#include <bits/stdc++.h>
using namespace std;
// TWO POINTER APPROACH
void arrayReverse(int arr[], int size){
    int strt = 0, end = size - 1;
    while (strt < end){
        swap(arr[strt], arr[end]);
        strt++;
        end--;
    }
}
int main() {
    int arr[] = {2, 3, 4, 5, 6, 7};
    cout << "Before reversing: ";
    for (int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    arrayReverse(arr, 6);
    cout << "\nAfter reversing: ";
    for (int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}