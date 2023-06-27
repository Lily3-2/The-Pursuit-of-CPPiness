// LC - 35. Search Insert Position

// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// TC = O(logn)

#include <bits/stdc++.h>
using namespace std;

//use the concept of lower bound => find the smallest index arr[index] >= target

int insert_position(vector<int> &nums, int target){
  int l = 0; 
  int h = nums.size()-1;
  int ans = nums.size(); //hypothetical index

  while(l <=h) {
    int mid = (l+h)/2;
    if(nums[mid] >= target) {
      ans = mid;
      h = mid -1;
    }
    else{
      l = mid +1;
    }
  }
  return ans;
}

/*
TC = O(nlogn)
int insert_position(vector<int> &arr, int k){
  int s = 0; int e = arr.size()-1;
  while(s<=e){
    int mid = s + (e-s)/2;
    if(arr[mid] == k){
      return mid;;
    }
    else if(arr[mid] > k){
      e = mid-1;
    }
    else{
      s = mid +1;
    }
  }
  //find position in array if target doesnt exist in the array
  int count = 0;
  for(int i = 0; i<arr.size(); i++){
    if(arr[i] < k){
      count++;
    }
  }
  return count;
}
*/

int main(){
  vector<int> arr ={1, 3, 5, 6};
  int k = 2;
  cout<<insert_position(arr, k);
  return 0;
}