#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> arr = {1, 2, 2, 1, 1};
    int majElement;
    for (int i = 0; i < 5; i++){
        int count = 0;
        for (int j = 0; j < 5; j++){
            if (arr[i] == arr[j])
                count++;
            if (count < 7/2)
                majElement = arr[i];
        }
    }
    cout << majElement <<  endl;
    return 0;
}