#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector <int> & arr){

    for (int i = 1; i < arr.size(); ++i){
        int current = arr[i]; 
        int previous = i - 1;
        // WE CHECK WETHER THE CURRENT ELEMENT IS GREATER THAN THE PREVIOUS ELEMENT TILL WE REACH THE INDEX 0 AND IF IT IS GREATER THEN WE MAKE THE GREATER ELEMENT TAKE THE PLACE OF
        // SMALLER ELEMENT AND AT LAST WE PUT THE SMALLER ELEMENT TO ITS PLACE 
        while (previous >= 0 && arr[previous] > current){
            arr[previous + 1] = arr[previous];
            previous--;
        }

        arr[previous + 1] = current;
    }
}
int main() {
    vector <int> arr = {4, 3, 2, 3};
    insertionSort(arr);
    for (int val: arr){
        cout << val << " ";
    }
    return 0;
} 