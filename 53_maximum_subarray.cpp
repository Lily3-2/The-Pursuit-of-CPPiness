//LC 53 - Maximum Subarray
//https://leetcode.com/problems/maximum-subarray/description/
//TC = O(n) SC = O(1)
#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
  int msum = nums[0];
  int sum = nums[0];
  for(int i = 1; i<nums.size(); i++){
          sum = max(nums[i], sum + nums[i]);
          msum = max(sum, msum);
      }
  return msum;
}
int main(){
  int n;
  cin>> n;
  vector<int> arr;
  for(int i =0; i<n;i++){
    int a;
    cin>>a;
    arr.push_back(a);
  }
  cout<<maxSubArray(arr);
  return 0;
}