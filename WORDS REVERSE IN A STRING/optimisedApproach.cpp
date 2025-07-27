#include <bits/stdc++.h>
using namespace std;
string reverseWords (string s){
    string ans = "";

    reverse(s.begin(), s.end());

    while (!s.empty() && s[0] == ' ')
        s.erase(s.begin());

    while (!s.empty() && s[s.size() - 1] == ' ')
        s.pop_back();

    string word = "";
    for (int i = 0; i < s.size(); ++i){
        if (s[i] != ' ')
            word += s[i];
        else if (!word.empty()){
            reverse(word.begin(), word.end());
            if(!ans.empty()) ans += ' ';
            ans += word;
            word = "";
        }
    }

    if (!word.empty()){
        reverse(word.begin(), word.end());
        if(!ans.empty()) ans += ' ';
        ans += word;
    }
    
    return ans;
}
int main() {
    string s = "  hello world  ";
    cout << reverseWords(s) << endl;   
    return 0;
}