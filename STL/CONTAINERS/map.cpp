#include <bits/stdc++.h>
using namespace std;

int main() {
    // KEY VALUE PAIR AND KEY IS UNIQUE AND VALUES CAN BE DUPLICATE 
    map <string, int> m;
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
    // BY DEFAULT SORT THE DATA ACCORFING TO THE KEYS IN ASCENDING ORDER
    cout << m.count("laptop") << endl;
    // COUNT RETURNS THE NO. OF TIMES THE KEY EXISTS IN THE MAP
    cout << m["laptop"] << endl;
    // ITS LIKE INDEXING IN THE ARRAYS AND IT RETURNS THE VALUES
    if (m.find("camera") != m.end()){
        cout << "found" << endl;
    }
    else
        cout << "not found" << endl;
    // FIND FUNCTION FINDS THE KEY IN THE MAP ITS RETURNS THE ITERATOR TO THAT PAIR ELSE IT RETURNS m.end() 
    return 0;
}