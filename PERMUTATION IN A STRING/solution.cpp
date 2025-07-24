#include<bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2) {
    if (s1.size() > s2.size()) return false;

    vector<int> countS1(26, 0);
    for (int i = 0; i < s1.size(); ++i) {
        countS1[s1[i] - 'a']++;
    }

    int start = 0, forward = start + s1.size() - 1;
    while (forward < s2.size()) {
        vector<int> countC(26, 0);
        for (int i = start; i <= forward; ++i) {
            countC[s2[i] - 'a']++;
        }

        if (countC == countS1)
            return true;

        start++;
        forward++;
    }

    return false;
}

int main() {
    string s1, s2;
    cout << "Enter s1: ";
    cin >> s1;

    cout << "Enter s2: ";
    cin >> s2;

    bool result = checkInclusion(s1, s2);

    if (result)
        cout << "A permutation of s1 exists in s2 as a substring." << endl;
    else
        cout << "No permutation of s1 exists in s2." << endl;

    return 0;
}
