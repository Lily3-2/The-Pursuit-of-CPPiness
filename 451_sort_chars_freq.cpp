//LC - 451. Sort Characters By Frequency

//Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

//TC = O(nlogn)  &  SC = O(n)
#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s){
  unordered_map<char, int> mpp;

  for(int i =0; i<s.length(); i++){
    mpp[s[i]]++;
  }
//lambda function (inline function)
  auto compare = [&](char a, char b) {
    if(mpp[a] != mpp[b]) {
      if(mpp[a] > mpp[b]) {
        return true;
      }
    }
    else {
      if(a>b) {
        return true;
      }
    }
    return false;
  };

  sort(s.begin(), s.end(), compare);
  return s;
}

/*
takes a lot of space and time
TC= O(n * logm) & SC= O(n)
string frequencySort(string s) {
    unordered_map<char, int> mpp;
    for(int i =0; i<s.length(); i++){
        mpp[s[i]]++;
    }
    vector<pair<int, char>> temp;

    for(auto itr: mpp) {
        temp.push_back(make_pair(itr.second, itr.first));
    }

    sort(temp.begin(), temp.end(), greater<pair<int, char>>());

    string ans;
    for(auto itr: temp){
        for(int j =0; j<itr.first; j++){
            ans = ans +  itr.second;
        }
    }
    return ans;
}
    */
int main () {
  string s;
  cin>>s;
  cout<< frequencySort(s);
  return 0;
}