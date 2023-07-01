// LC - 14. Longest Common Prefix
// Write a function to find the longest common prefix string amongst an array of strings.

//TC = O(n * m * logn) => n is the number of strings in strs and m is the average length of the strings
// SC = O(1)
#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &strs) {
  if(strs.empty()) {
    return "";
  }
  // sort the elements lexicographically
  sort(strs.begin(), strs.end());

  int a = strs.size();
  //strore the first and last element from the sorted array
  string n = strs[0];
  string m = strs[a-1];
  string ans ="";

  for(int i =0; i<n.length(); i++) {
    if(n[i] == m[i]){
      ans += n[i];
    }
    else {
      break;
    }
  }
  return ans;

}

int main() {
  vector<string> strs;
  for(int i =0; i<3; i++){
    string s;
    cin>>s;
    strs.push_back(s);
  }
  cout<< longestCommonPrefix(strs);

  return 0;
}
