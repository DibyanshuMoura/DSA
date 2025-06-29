#include <bits/stdc++.h>
using namespace std;
//& DENOTES THAT THE val IS JUST A ALIAS OF a
void change(int & val){
    val = 69;
}
int main() {
    int a = 10;
    change(a);
    cout << a << endl;
    return 0;
}