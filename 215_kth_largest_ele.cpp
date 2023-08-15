//Given an integer array nums and an integer k, return the kth largest element in the array.

// TC = O(nlogk) -> priority queue is of k elements and insertion takes log k time.
// SC = O(k) //size of the priority queue.

#include <bits/stdc++.h>
using namespace std;

int kth_largest_element (vector<int> &arr, int k) {
  if(arr.size() < k) {
    return -1;
  }

  priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.begin() + k);
  //remaining k elelment
  for(int i = k; i< arr.size(); i++) {
    if(arr[i] > pq.top()) {
      pq.pop();
      pq.push(arr[i]);
    }
  }
  return pq.top();

}

int main() {
  int n;
  cin >> n;
  vector<int> arr ;
  int k = 2;
  for(int i =0; i< n; i++) {
    int a ;
    cin >> a;
    arr.push_back(a);
  }
  cout << kth_largest_element(arr, k);
  return 0;
}