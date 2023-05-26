//for an array of size n create a hash array of size q and print the frequency of array elements with the help of hash array

#include <bits/stdc++.h>
using namespace std;

/*int main() {
  string s;
  cin>> s;

  int hash[26] ={0};
  for (int i=0; i<s.size(); i++) {
    hash[s[i]-'a']++;

  }

  int q;
  cin>>q;
  while(q--) {
    char n;
    cin>>n;
    cout<<hash[n-'a']<<endl;
  }

}

*/

int main() {
  int n;
  cin>>n;
  int arr[n];
  for (int i=0; i<n; i++) {
    cin>>arr[i];
  }

  //pre-compute
  unordered_map<int, int> mpp;
  for(int i =0; i<n; i++) {
    mpp[arr[i]]++;
  }

  //iterator
  for(auto it: mpp) {
    cout<<it.first<<" - "<<it.second<<endl;
  }

  int q;
  cin>>q;
  while(q--) {
    int k;
    cin>>k;
    cout<<mpp[k]<<endl;
  }
  return 0;
}