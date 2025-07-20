#include <bits/stdc++.h>
using namespace std;

int main() {
    //INTERNALLY DYNAMIC ARRAYS
    //WE CAN ACCESS THE ELEMENTS OF A DEQUE RANDOMLY
    deque <int> d = {1, 2, 3, 4};
    d.push_back(5);
    d.push_front(0);
    for (int val : d){
        cout << val << " ";
    }
    cout << endl;
    d.pop_back();
    d.pop_front();
    for (int val : d){
        cout << val << " ";
    }
    cout << endl;
    cout << d[2];
    return 0;
}