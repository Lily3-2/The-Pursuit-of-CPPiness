//recursive bubble sort
#include <bits/stdc++.h>
using namespace std;

void recursive_bubble(int arr[], int n) {
  if(n==1) return; //base case

  for (int i = 0; i < n-1 ; i++)
  {
    if(arr[i] > arr[i+1]) {
      int temp = arr[i+1];
      arr[i+1] =arr[i];
      arr[i] = temp;
    }
  }
  recursive_bubble(arr, n-1);
  
}

int main() {
  int n= 7;
  int arr[] = {2, 6, 9, 13, 2, 5, 8};
  recursive_bubble(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i] << " ";
  }
  
}