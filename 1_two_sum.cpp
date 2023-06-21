// LC - 1. Two Sum
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target

#include <bits/stdc++.h>
using namespace std;


// TC - O(N) & SC = O(N)
vector<int> two_sum(vector<int> &nums, int target){
  vector<int> ans;
  unordered_map<int, int> mpp;
  for(int i =0; i<nums.size(); i++){
    int n = target - nums[i];
    if(mpp.count(n)){
      ans.push_back(mpp[n]);
      ans.push_back(i);
      return ans;

    }
    mpp[nums[i]] = i;
  }
  return ans;
}

/*brute force
vector<int> two_sum(vector<int> &nums, int target){
  vector<int> ans ;
  for(int i = 0; i<nums.size(); i++){
    for(int j = i+1; j<nums.size(); j++) {
      if (target == nums[j] + nums[i] ) {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
      }
    }
  }
  return {-1, -1};
}

TC = O(n^2)
SC = O(1)
*/

int main(){
  vector<int> arr ={2, 6, 5, 8};
  int k = 14;
  vector<int> ans = two_sum(arr, k);
  for(int itr : ans){
    cout<<itr<<" "<<endl;
  }
  return 0;
}