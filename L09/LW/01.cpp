#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> vec;
    vec.push_back(230);
    vec.push_back(231);
    vec.push_back(232);
    cout << vec.front();
    cout << endl;
    cout << vec.at(1);
    cout << endl;
    cout << vec.back();
    cout << endl;
    cout << vec.size();
    cout << endl;
    cout << vec.capacity();
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    return 0;
}