#include <bits/stdc++.h>
using namespace std;

int main() {
    // UNIQUE VALUES IN A PARTICULAR SORTED ORDER
    // INTERNALLY USE SELF BALANCING TREE
    set <int> s;   
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    cout << "Lower Bound: " << *(s.lower_bound(4)) << endl;
    // lower_bound() FUNCTION SETS THE MINIMUM VALUE TO BE 4 (IN THIS CASE) AND IF 4 IS PRESENT IT RETURNS 4 ELSE IT RETURNS IMMEDIATE HIGHER VALUE THAN 4  
    // IF 4 IS NOT PRESENT AND NO VALUE IS HIGHER THAN 4 IT RETUNS endl() AS AN ITERATOR
    // IT RETURNS AN ITERATOR THAT POINTS TO 4 IN THIS CASE AND THEN WE DEREFERENCE IT TO ACCESS THE VALUE TO BE PRINTED
    
    cout << "Upper Bound: " << *(s.upper_bound(4)) << endl;
    // upper_bound() FUNCTION SETS THE MINIMUM VALUE TO BE 4 (IN THIS CASE) AND IT RETURNS IMMEDIATE HIGHER VALUE THAN 4  
    // IF NO VALUE IS HIGHER THAN 4 IT RETUNS endl() AS AN ITERATOR
    // IT RETURNS AN ITERATOR THAT POINTS TO 5 IN THIS CASE AND THEN WE DEREFERENCE IT TO ACCESS THE VALUE TO BE PRINTED

    for (int val: s){
        cout << val << " ";
    }

    
    return 0;
}