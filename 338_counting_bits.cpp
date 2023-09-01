/// Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
// TC = O(nlogn)  SC =O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> counting_bits(int n) {
  vector<int> ans(n+1);
  for(int i =0; i<= n; i++) {
    ans[i] = __builtin_popcount(i);
  }
  return ans;
}

/*
vector<int> counting_bits(int n) {
  vector<int> ans(n+1);
  for (int i =0; i<=n; i++) {
    int count = 0;
    int bit = i;
    while( bit != 0) {
      if(bit % 2) {
        count++;
      }
      bit = bit/ 2;
    }
    ans[i] = count;
  }
  return ans;
}

*/
int main() {
  int n = 5;
  vector<int> ans = counting_bits(n);
  for(auto itr: ans) {
    cout << itr <<" ";
  }
  return 0;
}