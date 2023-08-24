/*
A digit string is good if the digits (0-indexed) at even indices are even and the digits at odd indices are prime (2, 3, 5, or 7).

Given an integer n, return the total number of good digit strings of length n. Since the answer may be large, return it modulo 109 + 7.
*/

//TC = O(log n) -> from myPow function SC = O(1)

#include <bits/stdc++.h>
using namespace std;

// Calculate the power of a number modulo MOD using binary exponentiation
int myPow(long long x, long long n, long long mod) {
  int ans = 1;
  while( n> 0) {
    if(n % 2 == 0 ) {
      x = (x * x) % mod;
      n= n /2;
    }
    else {
      ans = (ans * x) % mod;
      n = n-1;
    }
    
  }
  return ans;
}

int countGoodNumbers(long long n) {
  long long mod = 1e9 + 7;
  int ans;

  long long even = n/2;
  long long odd = n - even;

  even = myPow(5, even, mod) ; // (5 possibilities: 0, 2, 4, 6, 8)
  odd = myPow(4, odd, mod) ; // (4 possibilities: 2, 3, 5, 7)

  ans = (even * odd) % mod;
  return ans;
}

int main() {
  long long n = 4;
  cout << countGoodNumbers(n);
  return 0;
}