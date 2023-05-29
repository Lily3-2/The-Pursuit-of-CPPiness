//given an array of elements, find top k elements  which have the highest frequency in the array. If two numbers have the same frequency then the larger number should be given preference. 

// Note: Print the elements according to the frequency count (from highest to lowest) and if the frequency is equal then larger number will be given preference.

//gfg

#include <bits/stdc++.h>
using namespace std;

vector<int> frequency(vector<int>& arr, int k){
//store the array element frequency in unordered map
  unordered_map<int, int> mpp;
  for(int i=0; i<arr.size(); i++) {
    mpp[arr[i]]++;
  }

//store the value of map in an array(vector) in pairs with frequency as key and element as value
  vector<pair<int, int>> arrk;
  for(auto m: mpp) {
    arrk.push_back(make_pair(m.second, m.first));
  }
//sort the array and store the pair in descending order based on the first element of each pair
  sort(arrk.begin(), arrk.end(), greater<pair<int,int>>());

  vector<int> ans;
  for(int i=0; i<k; i++) {
    ans.push_back(arrk[i].second);
  }
  return ans;
}

int main() {
  vector<int> arr {2,2,1,1,3,3,5,4};
  int k;
  cin>>k;
  //storing the ans in a vector
  vector<int> res = frequency(arr, k);
  
  for(auto itr: res) {
    cout<<itr<<" ";
  }
  return 0;
}
