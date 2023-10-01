// LC - 557. Reverse Words in a String III

// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.
// TC = , SC = 

#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
  string ans;
  int i = 0;
  while(i < s.length() ) {
    //ignore any whitespaces in the beginning
    while(i < s.length() && s[i] == ' ') {
      i++;
    }
    //reverse each word
    string temp;
    while(i< s.length() && s[i] != ' ') {
      temp = s[i] + temp;
      i++;
    }

    ans = ans + temp;

    //add space after reversing each word but not at the end
    if(i<s.length()) {
      ans = ans + ' ';
    }
  }
  return ans;
}

int main() {
  string s = "Let's take LeetCode contest";
  cout << reverseWords(s);
  return 0;
}
