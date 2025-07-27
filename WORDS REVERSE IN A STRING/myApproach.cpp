#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    vector<string> ans;
    string cS = "";
    
    for (char ch : s) {
        if (ch != ' ') {
            cS += ch;
        } else {
            if (!cS.empty()) {
                ans.push_back(cS);
                cS = "";
            }
        }
    }

    if (!cS.empty()) {
        ans.push_back(cS);
    }

    s = "";
    for (int i = ans.size() - 1; i >= 0; --i) {
        s += ans[i];
        if (i != 0)
            s += ' ';
    }

    return s;
}

int main() {
    string s = "  hello   world  ";
    cout << reverseWords(s) << endl;;
    return 0;
}
