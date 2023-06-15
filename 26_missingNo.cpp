//LC 268. Missing Number
//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

//TC = O(n) and SC = O(1)
#include <bits/stdc++.h>
using namespace std;

int missingNo(vector<int> &arr) {
  int hash[arr.size()+1] = {0};
  for(int i=0; i<arr.size(); i++) {
    hash[arr[i]]++;
  }

  for(int i=0; i<=arr.size(); i++){
    if(hash[i] == 0){
      return i;
    }
  }
  return -1;
}

int main() {
  int n;
  cin>>n;
  vector<int> arr;
  for(int i =0; i<n; i++) {
    int a ;
    cin >>a;
    arr.push_back(a);
  }
  cout<<missingNo(arr);
  return 0;
}

/*for(int i = 0; i<=nums.size(); i++) {
            int flag = 0;
            for(int j = 0; j<nums.size(); j++){
                if (i == nums[j]){
                    flag = 1; 
                    break;
                }
            }
            if(flag == 0) return i;
        }
        return -1;
        */