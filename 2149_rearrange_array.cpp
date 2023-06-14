//2149. Rearrange Array Elements by Sign
/*You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.
You should rearrange the elements of nums such that the modified array follows the given conditions:
Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

 */

#include <bits/stdc++.h>
using namespace std;


vector<int> rearrangeArray(vector<int>& nums) {
  vector<int> rearranged(nums.size());
  int even = 0;
  int odd = 1;
  for(int i =0; i<nums.size(); i++){
      if(nums[i] > 0){
          rearranged[even] = nums[i];
          even = even +2;
      }
      else {
          rearranged[odd] = nums[i];
          odd= odd +2;
      }
  }
  return rearranged;
}

int main(){
  vector<int> arr ={3,1,-2,-5,2,-4};
  vector<int> ans = rearrangeArray(arr);
  for(auto itr: ans){
    cout<< itr<<" ";     //[3,-2,1,-5,2,-4]
  }
  return 0;
}