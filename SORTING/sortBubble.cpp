#include <bits/stdc++.h>
using namespace std;
//BUBBLE SORT: WE COMPARE THE ADJACENTS ELEMENTS TO EACH OTHER AND THEN SWAP THE ELEMENTS IN ASCENDING ORDER  
void bubbleSort(vector <int>& nums){
    int n = nums.size();

    for (int i = 0; i < n - 1; i++){
        bool isSorted = true;
        // THE isSorted IS A CHECK CONDITION THAT ALLOWS MORE EFFICIENT IN BUBBLE SORT IF THE ARRAY IS SORTED BEFORE THE LOOPING ENDS
        for (int j = 0; j < n - i - 1; j++){
            if (nums[j] > nums[j + 1]){
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                isSorted = false;
            }
        }
        if (isSorted) break;    
    }
}

int main() {
    vector <int> arr = {4, 3, 2, 3};
    bubbleSort(arr);
    for (int val: arr){
        cout << val << " ";
    }
    return 0;
}