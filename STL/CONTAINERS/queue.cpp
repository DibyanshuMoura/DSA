#include <bits/stdc++.h>
using namespace std;

int main() {
    // QUEUE IS A DATA STRUCTURE THAT IS SIMILAR TO STACK BUT IS FIFO(FIRST IN FIRST OUT)
    queue <int> q;
    //PUSH FUNCTION PUSHES THE ELEMENT AT THE BACK OF THE QUEUE
    q.push(1);
    q.push(2);
    q.push(3);
    while (!q.empty()){
        //EMPTY FUNCTION RETURNS TRUE IF THE QUEUE IS EMPTY 
        cout << q.front() << endl;
        q.pop();
        //POP FUNCTION USED TO POP FROM THE FRONT OF THE QUEUE
    }   
    return 0;
}   