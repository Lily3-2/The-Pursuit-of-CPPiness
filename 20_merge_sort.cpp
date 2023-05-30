/*Merge Sort
TC = O(nlogn)
SC = O(n)*/

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
  //2 halves ->> [low....mid] and [mid+1....high]
  int left = low; //starting index of left half of array
  int right = mid + 1; //starting index of right halfof array
  vector <int> temp; //temporary array

  while(left <= mid && right <= high) {
    if(arr[left] < arr[right]) {
      temp.push_back(arr[left]);
      left++;
    }

    else{
      temp.push_back(arr[right]);
      right++;
    }
  }
//push left-out elements to temp array from left half
  while(left <= mid) {
    temp.push_back(arr[left]);
    left++;
  }
//push left-out elements from right half
  while(right <= high) {
    temp.push_back(arr[right]);
    right++;
  }
  //put elements of temp array to original array arr
  for(int i=low; i<=high; i++) {
    arr[i]= temp[i - low];
  }
}

void merge_sortt(vector<int> &arr, int low, int high) {
  //base case
  if(low>=high) {  //one element doesnt need sorting
    return;
  }
  int mid = (low + high) /2;
  //left half recursion
  merge_sortt(arr, low, mid);
  merge_sortt(arr, mid + 1, high);
  //right half recursion
  merge(arr, low, mid, high); //merging sorted halves
}



int main() {
  int n;
  cin>>n;

  int a;
//insert elements into the array
  vector <int> arr;
  for(int i=0; i<n ;i++){
    cin>>a;
    arr.push_back(a);
  }
  //arr, low, high
  merge_sortt(arr, 0, n-1);

  for(int i=0; i<n ;i++) {
    cout<<arr[i]<<" ";
  }

}