// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.

// TC = O(1) , SC = O(1)

#include <bits/stdc++.h>
using namespace std;

//loagrithmic approach 
bool isPowerOfTwo(int n) {
  if(n<= 0) {
    return false;
  }
  double log2num = log2(n);
  if(log2num == floor(log2num)) {
    return true;
  }
  return false;
}


// --- TC = O(logn) SC = O(1)  but this approach will have error if the n value will exceed the MAX_INT value
// bool isPowerOfTwo(int n) {
//   int temp = 1;
//     while( temp <= n){
//         if(temp == n) {
//             return true;
//         }
//         temp = temp * 2;
//     }
//   return false;
// }

int main() {
  int n = 64;
  if(isPowerOfTwo(n)) {
    cout<< "true";
  }
  else {
    cout << "false";
  }

  return 0;
}