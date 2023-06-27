// LC - 242. Valid Anagram

//Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// TC = O(max(s,t)) =>s and t are length of both strings
// SC = O(s+t) worst case if all characters are unique
// or O(1) for best case

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
  if(s.length() != t.length()){
    return false;
  }
 //This map will store the count of each character occurring in the string.
  unordered_map<char, int> mpp;
//each character in string s and increment its count in the frequency map. 
  for(int i = 0; i<s.length(); i++){
    mpp[s[i]]++;
  }
//each character in string t and decrement its count in the frequency map.
  for(int i =0; i<t.length(); i++){
    mpp[t[i]]--;
  }
//If any count is non-zero, it means the characters' frequencies do not match, and the strings are not anagrams
  for(auto itr: mpp){
    if(itr.second != 0){
      return false;
    }
  }
  return true;
}
int main(){
  string s = "anagram";
  string t = "nagaram";
  bool a = isAnagram(s, t);
  cout << a;
  return 0;
}
