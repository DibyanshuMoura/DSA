#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> vec = {1, 2, 3, 4, 5, 8, 10};
    
    int max = *(max_element(vec.begin(), vec.end()));   
    int min = *(min_element(vec.begin(), vec.end()));   

    cout << "Max and Min values are " << max << " and " << min << endl;
    return 0;
}