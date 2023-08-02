//LC - 88
/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively. The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.*/
//TC ans SC = O(m+n)

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr1, int m, vector<int> &arr2, int n) {
  vector<int> temp;
  int left = 0;
  int right = 0;
  while(left < m && right < n) {
    if(arr1[left] <= arr2[right]) {
      temp.push_back(arr1[left]) ;
      left++;
    }
    else{
      temp.push_back(arr2[right]);
      right++;
    }
  }
  while (left < m) {
    temp.push_back(arr1[left]) ;
      left++;
  }
  while (right < n) {
    temp.push_back(arr2[right]);
      right++;
  }
  for(int i =0; i<temp.size(); i++) {
    arr1[i] =temp[i];
  }
}

int main() {
  vector<int> arr1 = {1, 2, 3, 0, 0, 0};
  int m = arr1.size() - 3;
  vector<int> arr2 = {2, 5, 6};
  int n = arr2.size();
  merge(arr1, m, arr2, n) ;
  for(auto it: arr1) {
    cout << it << " ";
  }
  return 0;
}