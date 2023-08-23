// Write a function that takes the binary representation of an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

// TC = O(log n) SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n) {
  int count = 0;
  while(n > 0) {
    count = count + (n & 1) ;
    n = n >> 1;
  }
  return count;
}

int main () {
  uint32_t n = 00000000100101;
  cout << hammingWeight(n);
  return 0;
}