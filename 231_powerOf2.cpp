// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.

// TC = O() , SC = O()

#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
  int temp = 1;
    while( temp <= n){
        if(temp == n) {
            return true;
        }
        temp = temp * 2;
    }
  return false;
}

int main() {
  int n = 5;
  if(isPowerOfTwo(n)) {
    cout<< "true";
  }
  else {
    cout << "false";
  }

  return 0;
}