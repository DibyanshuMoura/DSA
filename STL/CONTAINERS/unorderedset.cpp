#include <bits/stdc++.h>
using namespace std;

int main() {
    // UNIQUE VALUES NOT ORDERED
    unordered_set <int> s;   
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for (int val: s){
        cout << val << " ";
    }

    return 0;
}