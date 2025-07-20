#include <bits/stdc++.h>
using namespace std;

int main() {
    //NORMAL PAIR 
    pair <char, int> p = {'a', 1};
    cout << p.first << endl;
    cout << p.second << endl;
    cout << endl;
    
    //PAIR INSIDE PAIR
    pair <int, pair <int, int>> p1 = {1, {1, 1}};
    cout << p1.first << " ";
    cout << p1.second.first << " ";
    cout << p1.second.second << " ";
    cout << endl;
    cout << endl;

    //PAIR INSIDE VECTOR
    vector <pair <int, int>> p2 = {{1, 2}, {2, 3}, {3, 4}};
    p2.push_back({4, 5});//ASSUMES THAT WE GAVE IT A PAIR AND IT JUST INSERTS IT
    p2.emplace_back(5, 6);//IT CREATE THE OBJECTS IN PLACE AND THEN INSERTS IT
    for (auto val : p2){
        cout << val.first << " " << val.second << endl;
    }
    return 0;
}