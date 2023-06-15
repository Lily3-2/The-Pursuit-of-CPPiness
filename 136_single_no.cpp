// LC - 136. Single Number
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

//You must implement a solution with a linear runtime complexity and use only constant extra space.


#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums){
  unordered_map<int, int> mpp;
  for(int i=0; i<nums.size(); i++){
    mpp[nums[i]]++;
  }

  for(auto itr: mpp){
    if(itr.second == 1) {
      return itr.first;
    }
  }
  return -1;
}

int main(){
  int n;
  cin>>n;
  vector<int> arr;
  for(int i =0; i<n; i++) {
    int a ;
    cin >>a;
    arr.push_back(a);
  }
  cout<< singleNumber(arr);
  return 0;
}