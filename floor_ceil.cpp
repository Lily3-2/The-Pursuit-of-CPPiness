//GFG - FInd floor and ceil value in an unsorted array
//TC = O(n) since array is not sorted
// SC = O(1)

#include<bits/stdc++.h>
using namespace std;

//first is more efficient
pair<int, int> floorAndCeil(int arr [], int n, int x){
  int floor = -1; 
  int ceil = -1;
 
  for(int i =0; i<n; i++){
    //to find floor value 
    if(arr[i] <= x && (floor == -1 || arr[i] > floor)){
      //it should be the greatest 
      floor = arr[i];
    }
    //find ceil value
    if(arr[i] >= x && (ceil == -1 || arr[i] < ceil)) {
      //it should be smallest such that -1 is not the smallest if there exists a ceil value
      ceil = arr[i];
    }
  }
  return {floor, ceil};
}

/*
pair<int, int> floorAndCeil(int arr [], int n, int x){
  int floor = -1; 
  int ceil = -1;
 
  for(int i =0; i<n; i++){
    //to find floor value 
    if(arr[i] <= x){
      //it should be the greatest 
      floor = max(floor, arr[i]);
    }
    //find ceil value
    if(arr[i] >= x) {
      //it should be smallest such that -1 is not the smallest if there exists a ceil value
      ceil = (ceil == -1)? ceil = arr[i] : min(ceil, arr[i]);
    }
  }
  return {floor, ceil};
}
*/


int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin >> arr[i];
  }

  int x;
  cin>>x;

  auto ans = floorAndCeil(arr, n, x);
  cout<< ans.first <<" " << ans.second;
  return  0;
}


