#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    // MY APPROACH WAS TO INSERT EVERY WORD INTO THE ANS ARRAY ANS THEN USING REVERSE LOOP TO ADD THEM AGAIN IN CORRECT ORDER IN THE STRING
    vector<string> ans;
    string cS = "";
    // FIRST ADD THE CHRACTERS INTO THE cS UNTIL IT ENOUNTERS SPACE ADD THE CURRENT STRING INTO THE ANS IF THE THE CS IS NOT EMPTY 
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
    // ADD THE LAST REMAINING WORD INTO THE ANS ARRAY
    if (!cS.empty()) {
        ans.push_back(cS);
    }
    // WE SET THE ORIGNAL STRING EMPTY AND THEN REVERSE LOOP IN THE ANS AND ADD THE WORD AND THE SPACES IF IT IS NOT THE FIRST WORD(OR THE LAST CAUSE REVERSE) 
    s = "";
    for (int i = ans.size() - 1; i >= 0; --i) {
        s += ans[i];
        if (i != 0)
            s += ' ';
    }
    // WE RETURN THE STRING WITH THE WORDS REVERSED IN IT
    return s;
}

int main() {
    string s = "  hello   world  ";
    cout << reverseWords(s) << endl;;
    return 0;
}
