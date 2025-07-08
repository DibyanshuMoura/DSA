#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums) {
        int pivotI = -1;
        //WE FIND THE PIVOT ELEMENT WHICH IS LESS THAN THE NEXT ELEMENT WHILE REVERSE TRAVERSING
        for (int i = nums.size() - 1; i >= 0; --i){
            if (i != nums.size() - 1 && nums[i] < nums[i + 1]){
                pivotI = i;
                break;
            }
        }
        //IF THEIR IS NO PIVOT ELEMENT WE SIMPLY REVERSE THE ARRAY
        if (pivotI == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        //IF THE PIVOT IS AVAILABLE THEN WE FIND THE NEXT GREATER ELEMENT THAN THE ONE AT PIVOT INDEX AND SWAP THEM
        if (pivotI != -1){
            for (int i = nums.size() - 1; i > pivotI; --i){
                if (nums[i] > nums[pivotI]){
                    swap(nums[i], nums[pivotI]);
                    break;
                }
            }
        }
        //AFTER SWAPPING THE PIVOT AND THE NEXT GREATER ELEMENT WE REVERSE THE ARRAY AFTER THE PIVOT ELEMENT
        int i = pivotI + 1, j = nums.size() - 1;
        //WE CAN USE THE REVERSE FUNCTION AS USED ABOVE IN CASE OF PIVOT BEING -1 BUT I DID IT MANUALLY HERE
        while(i <= j){
            swap(nums[i++], nums[j--]);
        }
}

int main() {
    vector <int> arr = {1, 3, 4, 5, 2};
    nextPermutation(arr);

    for (int val : arr){
        cout << val << " ";
    }

    return 0;
}
