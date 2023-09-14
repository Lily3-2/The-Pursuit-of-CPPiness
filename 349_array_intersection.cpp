// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.


// TC = O(n) and SC = O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
  unordered_set<int> s1;
  unordered_set<int> s2;

  //insert all elements from nums1 to set 1
  for(int i =0; i<nums1.size(); i++) {
    s1.insert(nums1[i]++);
  }

  //find all the elements of nums2 in set1 and insert common elements into set2
  for(int i = 0; i<nums2.size(); i++) {
    int k = nums2[i];
    if(s1.find(k) != s1.end()) {
      s2.insert(k);
    }
  }

  vector<int> ans;
  for(auto itr = s2.begin(); itr != s2.end(); itr++) {
    ans.push_back(*itr);
  }

  return ans;
}

int main() {
  vector<int> n1;
  vector<int> n2;

  for(int i =0; i<4; i++) {
    int a;
    cin>> a;
    n1.push_back(a);
  }

  for(int i =0; i<2; i++) {
    int a ;
    cin >> a;
    n2.push_back(a);
  }
  vector<int> ans = intersection(n1, n2);
  
  for(auto itr: ans) {
    cout<< itr << " ";
  }
  return 0;
}