// LC = 796. Rotate String

/*
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
A shift on s consists of moving the leftmost character of s to the rightmost position.
For example, if s = "abcde", then it will be "bcdea" after one shift.
*/

#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal){
    if(s.length() != goal.length()){
        return false;
    }
    string concat = s + s;
    

}

int main (){
    string s = "abcde";
    string goal = "cdeab";

    cout << rotateString(s, goal);
    return 0;
}