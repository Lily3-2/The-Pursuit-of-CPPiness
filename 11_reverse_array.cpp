//recurvsive method   //TC= O(n) //SC=O(1)
#include <bits/stdc++.h> 
using namespace std;

void printArray(int arr[], int n) {
  for(int i=0; i<n; i++) {
    cout<<arr[i]<<" ";
  }
}

void reverseArray(int arr[], int start, int end) {
  if (start >= end) { // base case
    return;
  }
  swap(arr[start], arr[end]);
  reverseArray(arr, start+1, end-1);
}

int main() {
  int n;
  int arr[n];
  //input array length
  cout<<"enter the no of elements in array"<<endl;
  cin>>n;
  //take array elements from user
  cout<<"enter the elements in array"<<endl;
  for(int i = 0; i<n; i++) {
    cin>>arr[i];
  }
  reverseArray(arr, 0, n-1);
  printArray(arr, n);
  return 0;
}


/*#include <bits/stdc++.h>

***simple reversing method through loop***

using namespace std;

void rev_arr(int arr[], int n){
  cout<<"reverse array is: "<<endl;
  for(int i=n-1; i>=0; i--) {
    cout<<arr[i]<<" ";
  }
}

int main(){
  //no of elements in array
  int n;
  cin>>n;
  int arr[n];
  cout<<"enter the array elements"<<endl;;
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }
  rev_arr(arr, n);
  return 0;
}

*/