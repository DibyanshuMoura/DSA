#include <bits/stdc++.h>
using namespace std;

int main() {
    //WE IMAGINE IT LIKE A STACK BUT THE HIGHEST PRIORITY ELEMENT REMAINS AT THE TOP (USUALLY THE ELEMENT OF THE GREATEST VALUE)
    priority_queue <int> q;
    q.push(1);   
    q.push(4);   
    q.push(10);
    while (!q.empty()){
        cout << q.top() << endl;
        q.pop();
    }   
    cout << endl;
    
    //REVERSE PRIORITY QUEUE HAS THE ELEMENT WITH THE SMALLEST VALUE HAS THE HIGHEST PRIRORITY
    priority_queue <int, vector<int>, greater<int>> p;
    p.push(1);   
    p.push(4);   
    p.push(10);
    while (!p.empty()){
        cout << p.top() << endl;
        p.pop();
    }   
    return 0;
}