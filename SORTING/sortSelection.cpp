#include <bits/stdc++.h>
using namespace std;
// IN SELECTION SORT WE ASSUME THE i th ELEMENT IS THE SMALLEST AND THE LOOK IT IN THE REST OF THE APART FROM THE i th ONE AND THEN IF WE FIND A MORE SMALLER ONE 
// THEN WE SWAP THE i th AND THE SMALLEST ONE
void selectionSort(vector <int> &arr){
    int n = arr.size();
    for (int i = 0; i < n - 1; i++){
        int SI = i;
        //ASSUME THE i th IS THE SMALLEST ELEMENT INDEX
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[SI])
                SI = j;
                //IF WE FIND AN ELEMENT MORE SMALLER THAN i th ELEMENT THEN WE STORE ITS INDEX AS THE SMALLEST
        }
        //AFTER LOOK AT THE WHOLE ARRAY WE SWAP THE SMALLEST INDEX AND THE i th ELEMENT
        swap(arr[SI], arr[i]);
    }
}
int main() {
    vector <int> arr = {4, 3, 2, 3};
    selectionSort(arr);
    for (int val: arr){
        cout << val << " ";
    }
    return 0;
}