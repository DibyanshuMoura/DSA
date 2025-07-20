#include <bits/stdc++.h>
using namespace std;
//CUSTOM COMPARITOR
bool comparitor(pair <int, int> p1, pair <int, int> p2){
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    
    if (p1.first < p2.first) return true;
    else return false;
}
int main() {
    vector <pair<int, int>> vec = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};

    // BY DEFAULT IN ASCENDING ORDER
    sort(vec.begin(), vec.end(), comparitor);

    for (auto val: vec){
        cout << val.first << " " << val.second << endl;
    }

    cout << endl;
    
    return 0;
}