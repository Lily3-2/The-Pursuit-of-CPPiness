//Given an array, we have found the number of occurrences of each element in the array.

#include <bits/stdc++.h>
using namespace std;


void frequency(int arr[], int n) {
  //pre-compute using unordered map
  unordered_map<int, int> ump;
  for(int i=0; i<n; i++) {
    ump[arr[i]]++;
  }

  //iterator to simultaenously print the array element with frequency

  for( auto k: ump) {
    cout<<k.first<<"  "<<k.second<<endl;
  }

}


int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }
  frequency(arr, n);
  return 0;

  

}