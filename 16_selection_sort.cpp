#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
  //sorting loop from 1st till second last element in array
  for(int i=0; i<n-1; i++) {
    int mini = i;
    //loop from ith element till last element to check min in that range
    for(int j=i; j<n; j++) {
      if(arr[j]<arr[mini]) {
        mini =j;
      }
    }
    //swapping the values
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;

  }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for (int i=0; i<n ; i++) {
    cin>>arr[i];
  }
  selection_sort(arr,n);
  for(int i=0; i<n; i++) {
    cout<<arr[i]<<" " ;
  }
  return 0;
}