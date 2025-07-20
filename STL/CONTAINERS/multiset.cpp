#include <bits/stdc++.h>
using namespace std;

int main() {
    // NO UNIQUE VALUES ORDERED
    multiset <int> s;   
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    
    s.insert(1);
    s.insert(2);
    s.insert(3);
    for (int val: s){
        cout << val << " ";
    }

    return 0;
}