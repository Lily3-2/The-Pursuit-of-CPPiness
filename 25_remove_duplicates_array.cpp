//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//from an array display the first k unique elements and with redundant remaining element and return k
//shift or remove the normal order into the order of the unique elements
//using hasmap to store elements and its frequency
#include <bits/stdc++.h>
using namespace std;
//not an in-place approach
int unique_ele(vector<int> &arr) {
  int k;
  map<int, int> mpp;
  for(int i=0; i<arr.size(); i++) {
    mpp[arr[i]]++;
  }
  int count = 0;

  for(auto itr: mpp) {
      count++;
  }
  return count;

}
int main() {
  vector<int> arr {1, 1, 2, 2, 2, 3 ,3};
  cout << unique_ele(arr);
  return 0;

}

