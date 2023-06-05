//Second Largest Element in an array without sorting
#include <bits/stdc++.h>
using namespace std;

int slargest(vector<int> &arr){
  int largest = INT_MIN;
  int slargest = 0;
  for(int i =0; i<arr.size(); i++){
    if(arr[i] > largest) {
      slargest = largest;
      largest = arr[i];
    }
    //to ensure that the second largest element is distinct from the largest element.
    else if(arr[i] > slargest && arr[i] != largest) {
      slargest = arr[i];
    }
  }
  return slargest;
}

int main(){
  vector<int> arr = {2, 4, 20, 1, 20, 3, 7};
  cout << slargest(arr)<<endl;
  //cout<< ssmallest(arr);
  return 0;
}