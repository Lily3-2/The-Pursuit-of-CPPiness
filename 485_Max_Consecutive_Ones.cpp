//LC - 485. Max Consecutive Ones
//Given a binary array nums, return the maximum number of consecutive 1's in the array.

//TC = O(n)
 

#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>&nums){
  int maxC = 0;
      int count = 0;
  for(int i = 0; i<nums.size(); i++){

    if(nums[i] == 1){
      count++;
      maxC = max(count, maxC);
    }
    else{
      count = 0;
    }
  }
  return maxC;
}

int main(){
  vector<int> arr = {1, 1, 0, 1, 1, 1  };
  cout<< findMaxConsecutiveOnes(arr);
  return 0;
}