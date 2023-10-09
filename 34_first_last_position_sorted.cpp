// LC 34 
/*Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]*/

//TC = O(logn) SC =O(n);

#include <bits/stdc++.h>
using namespace std;

vector<int>searchRange(vector<int>&nums, int target) {
  //store ans
  vector<int> ans = {-1,-1};
  //binary search
  int s = 0;
  int e = nums.size() -1 ;

  while(s<=e) {
    int mid  = s + (e-s)/2;
    if(nums[mid] == target) {
      //make sure the array index out of bound error does not occur
      while(mid > 0 && nums[mid-1] == target) {
        mid--;
      }
      ans[0] = mid;
      while(mid < nums.size() - 1 && nums[mid+1] == target) {
        mid++;
      }
      ans[1]= mid;
      return ans;
    }

    else if(nums[mid] > target) {
      e = mid - 1;
    }
    else {
      s = mid + 1;
    }
  }
  return ans;
}

int main() {
  vector<int> arr = {5,7,7,8,8,10};
  vector<int> ans = searchRange(arr, 8);
  for(auto itr: ans) {
    cout << itr <<" ";
  }
  return 0;
}