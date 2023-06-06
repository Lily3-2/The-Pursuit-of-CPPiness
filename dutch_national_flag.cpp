//Sort an array of 0s, 1s and 2s
//https://leetcode.com/problems/sort-colors/
//TC =O(n), SC= O(1)
#include <bits/stdc++.h>
using namespace std;
//optimal approach
void sortColors(vector<int>& nums) {
      int low = 0; int mid =0; int high = nums.size()-1;
      while(mid <= high) {
        if(nums[mid] == 0){
          swap(nums[low], nums[mid]);
          low++;
          mid++;
        }
        else if(nums[mid] == 1) {
          mid++;
        }
        else{
          swap(nums[high], nums[mid]);
          high--;
        }
      }
  
    }
/*
void sortColors(vector<int> &arr){
  int count0 =0 , count1 = 0, count2 = 0;
  for(int i =0; i<arr.size(); i++){
    if(arr[i] == 0) count0++;
    else if(arr[i] == 1) count1++;
    else count2++;
  }

  for(int i=0; i<count0; i++){
    arr[i] = 0;
  }
  for(int i=count0; i<count0 + count1; i++) {
    arr[i] = 1;
  }
  for(int i = count0 + count1; i<arr.size(); i++){
    arr[i] = 2;
  }
}
*/

int main(){
  vector<int> arr ={2,0,2,1,1,0};
  sortColors(arr);
  for(auto itr: arr){
    cout<<itr<<" ";
  }
}