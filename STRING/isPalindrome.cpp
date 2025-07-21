#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    int start = 0, end = s.size() - 1;
    while (start <= end){
        if (tolower(s[start++]) != tolower(s[end--]))
            return false;
        else if (s[start] == ' ')
            start++;
        else if (s[end] == ' ')
            end--;
    }
    return true;
}
int main() {
    string s ;
    cout << "Enter a string: ";
    getline(cin, s);
    if (isPalindrome(s))
        cout << "The string is a Palindrome.\n";
    else    
        cout << "The string is not a Palindrome.\n";
    return 0;
}