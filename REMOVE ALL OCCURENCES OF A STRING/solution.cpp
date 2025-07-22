#include <bits/stdc++.h>
using namespace std;

string removeAllOccurences(string str, string part){
    while (str.size() > 0 && (str.find(part) < str.size())){
        str.erase(str.find(part), part.size());
    }

    return str;
}

int main() {    
    string str = "Helllllllo";
    string part = "ll";
    str = removeAllOccurences(str, part);
    cout << str << endl;
    return 0;
}