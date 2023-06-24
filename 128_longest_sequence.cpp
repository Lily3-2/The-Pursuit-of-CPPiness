// LC - 128. Longest Consecutive Sequence
//Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

//TC = O(n), SC = O(n)

#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums) {
  unordered_set<int> numSet(nums.begin(), nums.end());
  int longestStreak = 0;
  for(int i =0; i<nums.size(); i++){
    //check if current number is the start of a sequence suc that a number lesser than that doesnt exist
    if(numSet.find(nums[i] - 1) == numSet.end()) { //numSet.end() means iterator has reached end of the set
      int currentStreak = 1;
      int CurrentNum = nums[i];
      //continue till consecutive numbers are found
      while(numSet.find(CurrentNum +1 ) != numSet.end()) { //checks while finding the consecutive numbers the iterator has not reached the end
        CurrentNum ++;
        currentStreak ++;
      }
      longestStreak = max(longestStreak, currentStreak);
    }
  }
  return longestStreak;
}

int main(){
  vector<int> arr ={100, 4, 200, 1, 3, 2};
  cout<<longestConsecutive(arr);
  return 0;
}