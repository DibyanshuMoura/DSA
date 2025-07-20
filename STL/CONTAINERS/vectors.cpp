#include <iostream>
#include <vector>
using namespace std;

int main() {
    //CONTAINER
    vector <int> arr = {1, 2, 3, 4, 5 ,6};

    // cout << arr.capacity() << endl;
    // for (int val : arr){
    //     cout << val << " ";
    // }

    // cout << endl;
    // arr.push_back(7);
    // arr.push_back(8);

    // cout << arr.capacity() << endl;
    // for (int val : arr){
    //     cout << val << " ";
    // }

    // ITERATORS
    for (auto it = arr.begin(); it != arr.end(); ++it){
        cout << *(it) << " ";
    }
    cout << endl;
    //REVERSE ITERATOR
    for (auto i = arr.rbegin(); i != arr.rend(); ++i){
        cout << *(i) << " ";
    }
    return 0;
}