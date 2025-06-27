#include <bits/stdc++.h>
using namespace std;
int searchLinear(vector <int> & vec,int target){
    for (int i = 0; i < vec.size(); i++){
        if (vec[i] == target)
            return i;
    }
    return -1;
}
int main() {
    vector <int> vec = {1, 2, 3, 4, 5};
    int target = 3;
    int tarIndex = searchLinear(vec, target);
    if (tarIndex != -1)
        cout << "Element found at index " << tarIndex << " of the vector.\n";
    else
        cout << "Element not found.\n";   
    return 0;
}