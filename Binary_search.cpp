#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int k){
  int start = 0;
  int end = arr.size()-1;
  int mid = start + (end-start)/2;
  while(start<=end) {
    if(arr[mid] == k) return mid;
    if(arr[mid] > k) {
      end = mid-1;
    }
    if(arr[mid] < k){
      start = mid +1;
    }
    mid = start + (end-start)/2;
  }
  return -1;
}

int main(){
  vector<int> arr ={1, 2, 3, 4, 5};
  cout<<binary_search(arr, 21);
  return 0;
}