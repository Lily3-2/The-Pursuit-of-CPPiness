//array from where the element with highest frequency is returned
#include <bits/stdc++.h>
using namespace std;

int frequency(int arr[], int n) {
  unordered_map<int, int> mpp;
  for(int i=0; i<n; i++) {
    mpp[arr[i]]++;
  }



  int ans = INT_MIN;
  int sol=0;
  for(auto itr: mpp) {
    cout<<itr.first<<" "<<itr.second<<endl;
    if(ans<itr.second) {
      ans = itr.second;
      sol = itr.first;
    }
  }

  return sol;
}

int main() {
  int arr[] = {5, 2, 1, 10, 5 , 9, 5};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<frequency(arr, n);

  return 0;
}



  

  
  




