// LC = 796. Rotate String

/*
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
A shift on s consists of moving the leftmost character of s to the rightmost position.
For example, if s = "abcde", then it will be "bcdea" after one shift.
*/
//TC = O(n^2) => substr takes the tc of O(n);  SC =O(n)
#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal){
    if(s.length() != goal.length()){
        return false;
    }
    string concat = s + s;
    for(int i =0; i<concat.length() - goal.length()+1; i++){
        if(concat.substr(i, goal.length()) == goal){
            return true;
        }
    }
    return false;

}

int main (){
    string s = "abcde";
    string goal = "cdeab";

    cout << rotateString(s, goal);
    return 0;
}