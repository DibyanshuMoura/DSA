#include <bits/stdc++.h>
using namespace std;
bool isValid (vector <int> pages, int totalStudents, int maxAllowedPages){
    int student = 1, currentPages = 0;
    for (int i = 0; i < pages.size(); i++){
        if (pages[i] > maxAllowedPages)
            return false;
        if (currentPages + pages[i] <= maxAllowedPages){
            currentPages += pages[i];
        }
        else {
            student++;
            currentPages = pages[i];
        }
    }
    if (student > totalStudents)
        return false;
    else 
        return true;
}

int bookAllocation(vector <int> pages, int students){
    int sum = 0;
    for (int i = 0; i < pages.size(); i++){
        sum += pages[i];
    }
    int start = 0, end = sum, ans = -1;
    while (start <= end){
        int mid = start + (end - start) / 2;
        if (isValid(pages, students, mid)){
            ans = mid;
            end = mid - 1;
        }
        else    
            start = mid + 1;
    }
    return ans;
}
int main() {
    vector <int> arr = {2, 1, 3, 4};
    cout << bookAllocation(arr, 2) << endl;   
    return 0;
}