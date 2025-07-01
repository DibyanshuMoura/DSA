#include <bits/stdc++.h>
using namespace std;
//TO CHECK IF THE CURRENT ANS IS VALID OR NOT, BY CHECKING THE MAXPAGE LIMIT AND COUNTING THE STUDENTS
bool isValid (vector <int> pages, int totalStudents, int maxAllowedPages){
    int student = 1, currentPages = 0;
    for (int i = 0; i < pages.size(); i++){
        //IF A SINGLE PAGE IS GREATER THAN THEN THE MAXIMUM NUMBER OF ALLOWED PAGES, IT AUTOMATICALLY BECOMES FALSE
        if (pages[i] > maxAllowedPages)
            return false;
        //IF THE SUM OF CURRENT PAGES AND PAGE RN IS LESS THAN EQUAL TO MAxALLOWED PAGE, WE'LL ADD THE PAGE RN TO CURRENTP AGE
        if (currentPages + pages[i] <= maxAllowedPages){
            currentPages += pages[i];
        }
        //IF NOT IT MEANS THAT PER STUDENT ALLOCATION HAS EXCEEDED AND WE'LL NEED A NEW STUDENT AND CURRENT PAGE WILL BE RESETTED TO THE PAGE RN
        // AS THE OLDER PAGES HAS ALREADY BEEN ALLOCATED AND WE NEED TO HAVE A CLEAN SHEET FOR THE NEW STUDENT
        else {
            student++;
            currentPages = pages[i];
        }
    }
    //IF THE NUMBER OF STUDENTS IS GREATER THAN THE LIMIT OF THE STUDENT THEN IT MEANS THAT THE MAXPAGE LIMIT IS INVALID AS THE NO. OF STUDENTS NEEDED 
    //ARE GREATER BUT WE CANNOT INCREASE THE STUDENT SIZE AS ITS FIXED HOWEVER WE CAN INCREASE THE MAXPAGE LIMIT SO THIS CURRENT MAXPAGE LIMIT IS INVALID
    if (student > totalStudents)
        return false;
    else 
        return true;
}
//THE CHECKING OF THE ANSWER NEEDS TO HAVE A SEPERATE VARIABLE CAUSE IF THIS ANS FITTS THE CRITERIA, THEIR CAN BE AN ANSWER MORE SUITABLE THAN THIS
int bookAllocation(vector <int> pages, int students){
    //WE APPLY THE BNINARY SEARCH NOT DIRECTLY ON THE GIVEN ARRAY BUT THE POSSBLE RANGE OF THE NUMBER OF ANSWERS
    int sum = 0;
    for (int i = 0; i < pages.size(); i++){
        sum += pages[i];
    }
    int start = 0, end = sum, ans = -1;
    while (start <= end){
        int mid = start + (end - start) / 2;
        //IF THE ANSWER IS VALID THEN THE NEED IS TO LOOK FOR MINIMUM HIGHER BOOK ALLOCATION SO WE DISCARD THE RIGHT SIDE
        if (isValid(pages, students, mid)){
            ans = mid;
            end = mid - 1;
        }
        //IF THE ANSWER IS INVALID THEN IT MEANS THAT THE ANSWER IS GREATER THAN THIS SO WE MOVE TO THE RIGHT HALF
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