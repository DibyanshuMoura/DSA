#include <bits/stdc++.h>
using namespace std;

bool isAlphaNumeric(char ch){
    if ((tolower(ch) >= 'a' && tolower(ch) <= 'z') || (ch >= '0' && ch <= '9'))
        return true;
    return false;
}

bool validPalindrome (string str){
    int start = 0, end = str.size() - 1;
    while (start < end){
        if (!isAlphaNumeric(str[start])){
            start++;
            continue;
        }
        if (!isAlphaNumeric(str[end])){
            end--;
            continue;
        }
        if (tolower(str[start]) != tolower(str[end]))
            return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    string str = "abc   cba";
    if (validPalindrome(str))
        cout << "The Palindrome is valid.\n";
    else
        cout << "The Palindrome is not valid.\n";
    return 0;
}