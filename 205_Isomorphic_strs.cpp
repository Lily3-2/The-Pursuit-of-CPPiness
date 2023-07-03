// LC -
//Given two strings s and t, determine if they are isomorphic.

//Two strings s and t are isomorphic if the characters in s can be replaced to get t.

//TC = O(n)  & SC = O(n) n is the length of (s and t)

#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
  unordered_map<char, char> smp, tmp;

  for(int i =0; i<s.length(); i++){
    if(smp.count(s[i])) {
      if(smp[s[i]] != t[i]) {
        return false;
      }
    }
    else {
      smp[s[i]] = t[i];
    }

    if(tmp.count(t[i])) {
      if(tmp[t[i]] != s[i]) {
        return false;
      }
    }
    else{
      tmp[t[i]] = s[i];
    }
  }
  return true;
}

int main() {
  string s, t;
  cin>> s;
  cin>> t;
  cout<< isIsomorphic(s, t);
  return 0;
}