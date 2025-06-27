#include <bits/stdc++.h>
using namespace std;
void arrayReverse(vector <int>& vec, int size){
    int start = 0, end = size - 1;
    while (start < end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}
int main() {
    vector <int> vec = {1, 2, 3, 4, 5, 6};
    cout << "Orignal Array: ";
    for (int i : vec){
        cout << i << " ";
    }
    arrayReverse(vec, vec.size());
    cout << "\nAfter reversing the array: ";
    for (int i : vec){
        cout << i << " ";
    }
    return 0;
}   