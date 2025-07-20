#include <bits/stdc++.h>
using namespace std;

int main() {
    // KEY VALUE PAIR AND KEY IS NOT UNIQUE AND VALUES CAN BE DUPLICATE 
    multimap <string, int> m;
    m.emplace("tv", 100);
    m.emplace("laptop", 200);
    m.emplace("headphones", 50);
    m.emplace("tablet", 70);
    m.emplace("tablet", 30);

    for (auto p : m){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}