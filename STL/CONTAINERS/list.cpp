#include <bits/stdc++.h>
using namespace std;

int main() {
    //INTERNALLY DOUBLY LINKED LIST
    //CANNOT ACCESS RANDOMLY
    list <int> l;
    l.push_back(2);  
    l.push_back(3);
    l.push_front(1);
    for (int val : l){
        cout << val << " ";
    }  
    cout << endl;
    l.pop_back();
    l.pop_front();
    for (int val : l){
        cout << val << " ";
    }
    return 0;
}