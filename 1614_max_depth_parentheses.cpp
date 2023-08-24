// 1614. Maximum Nesting Depth of the Parentheses

//For example, "", "()()", and "()(()())" are VPS's (with nesting depths 0, 1, and 2), and ")(" and "(()" are not VPS's.

// Given a VPS represented as string s, return the nesting depth of s.

// TC = O(n) and SC = O(n) : worst case, O(1) : best case

#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
  stack<char> st;
  int depth = 0;
  int maxDepth = 0;

  for(int i = 0; i< s.length(); i++) {
    if(s[i] == '(') {
      st.push(s[i]);
      depth = st.size();
      maxDepth = max(depth, maxDepth);
    }
    if(s[i] == ')') {
      st.pop();
    }
  }
  return maxDepth;
}

int main() {
  string s = "(1 + (4 * (2)) - (5 + 9))";
  cout << maxDepth(s);
  return 0;
}