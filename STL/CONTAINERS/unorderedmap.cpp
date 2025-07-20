#include <bits/stdc++.h>
using namespace std;

int main() {
    // KEY VALUE PAIR AND KEY IS UNIQUE AND VALUES CAN BE DUPLICATE 
    // NO DUPLICATE IN KEYS LIKE IN MULTIMAP
    unordered_map <string, int> m;
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;
    m.insert({"camera", 25});
    m.emplace("mouse", 10);
    m.erase("tv");
    // ERASE FUNTION ERASES THE SPECIFIED KEY AND VALUE
    for (auto p : m){
        cout << p.first << " " << p.second << endl;
    }
   
}