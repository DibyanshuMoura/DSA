#include <bits/stdc++.h>
using namespace std;
string reverseWords (string s){
    string ans = "";
    // WE REVERSE THE WHOLE STRING FIRST
    reverse(s.begin(), s.end());

    // REMOVE THE EXTRA SPACES FORM THE BEGINNIG 
    while (!s.empty() && s[0] == ' ')
    s.erase(s.begin());
    
    // REMOVE THE EXTRA SPACES FORM THE END
    while (!s.empty() && s[s.size() - 1] == ' ')
        s.pop_back();

    // WE THEN ADD A WORD TO THE STRING WORD UPTIL THE SPACE AND THE ADD IT TO THE FINAL REVERSE WORD STRING ANS
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
    // TO ADD THE LAST WORD, WE ADD IT SEPARATELY CAUSE AFTER IT THEIR IS NO SPACES LEFT SO THE UPPER LOOP DOES NOT APPEND THE WORD INTO THE FINAL REVERSE WORDS STRING
    if (!word.empty()){
        reverse(word.begin(), word.end());
        if(!ans.empty()) ans += ' ';
        ans += word;
    }
    // WE RETURN THE FINAL WORD STRING
    return ans;
}
int main() {
    string s = "  hello world  ";
    cout << reverseWords(s) << endl;   
    return 0;
}