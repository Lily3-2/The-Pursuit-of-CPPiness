//recursive iterative sort
#include <bits/stdc++.h>
using namespace std;

void recursive_iteration( int arr[], int i, int n) {
  if (i == n) return; 
  int j = i;
  while( j>0 && arr[j-1]>arr[j]) {
    int temp = arr[j - 1];
    arr[j - 1] = arr[j];
    arr[j] = temp;
    j--;
  }
  recursive_iteration(arr, i+1, n);
}

int main() {
  int n= 7;
  int arr[] = {2, 6, 9, 13, 2, 5, 8};
  recursive_iteration(arr,0,  n);
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i] << " ";
  }
}