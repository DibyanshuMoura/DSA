#include <bits/stdc++.h>
using namespace std;

int main() {
    //STACK IS A DATA STRUCTURE THAT USES LIFO 
    stack <int> s;
    //PUSH FUNCTION IS USED TO PUSH THE ELEMENT AT THE TOP OF THE STACK
    s.push(1);   
    s.push(2);   
    s.push(3);
    //LOOPS IN STACK EMPTY() FUNCTION RETURNS TRUE IF THE STACK IS EMPTY 
    while (!s.empty()){
        cout << s.top() <<  " ";//TOP FUNCTION RETURNS THE TOP ELEMENT OF THE STACK
        s.pop();//POP FUNCTION DELETS THE TOP ELEMENT OF THE STACK
    }
    cout << endl;
    
    s.push(1);   
    s.push(2);   
    s.push(3);

    stack <int> s2;
    s2.swap(s);//SWAP FUNCTIONS SWAPS THE ELEMENTS OF ONE STACK INTO ANOTHER, S2 HAS THE ELEMENTS OF S AND S HAS NOTHING AS INITIALLY S2 HAD NOTHING
    cout << s.size() << endl;
    cout << s2.size() << endl;
    return 0;
}