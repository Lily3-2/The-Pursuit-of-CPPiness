//LC - 169:  https://leetcode.com/problems/majority-element/description/
/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.
*/

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums){
  int n = nums.size();
  map<int, int> mpp;
  for(int i =0; i<nums.size(); i++){
    mpp[nums[i]]++;
  }

  for(auto itr: mpp){
    if(itr.second > n/2){
      return itr.first;
    }
  }
  return -1;
}

/*

int majorityElement(vector<int>& nums) {
  unordered_map<int, int> mpp;
  for(int i=0; i<nums.size(); i++){
      mpp[nums[i]]++;
  }
  vector<pair<int, int>> ans;
  for(auto itr: mpp){
      ans.push_back(make_pair(itr.second, itr.first));
  }
  sort(ans.begin(), ans.end(), greater<pair<int,int>>());
  int n = ans[0].second;
  return n;
}

*/

int main(){
  vector<int> arr = {2,2,1,1,1,2,2};
  cout<<majorityElement(arr);
  return 0;
}