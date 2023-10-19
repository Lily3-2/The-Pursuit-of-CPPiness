// 844 Backspace String Compare

/*
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
*/

// TC and SC = O(max(N, M))

#include <bits/stdc++.h>
using namespace std;

bool backspaceCompare(string s, string t) {
  stack<char> s1, t1;

  for(char c: s) {
    if(c == '#') {
      if(!s1.empty()) {
        s1.pop();
      }
    }
    else {
      s1.push(c);
    }
  }

  for(char c : t) {
    if(c == '#') {
      if(!t1.empty()) {
        t1.pop();
      }
    }
    else {
      t1.push(c);
    }
  }

  string r1, r2;
  while(!s1.empty()) {
    r1 += s1.top();
    s1.pop();
  }

  while(!t1.empty()) {
    r2 += t1.top();
    t1.pop();
  }

  return r1==r2;
}

int main() {
  string s = "ab##";
  string t = "c#d#";

  cout << backspaceCompare(s, t);
  return 0;
}