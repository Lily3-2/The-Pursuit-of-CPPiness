// Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).

//TC = O(logn) SC =O(1)

#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
  double ans = 1.0;
  long long p = abs(n);
  while(p > 0) {
    if(p % 2 == 0) {
      x = x * x;
      p = p/2;
    }
    else {
      ans = ans * x;
      p = p - 1;
    }
  }
  if(n<0) {
    return 1/ans;
  }
  return ans;
}

int main() {
  double x = 2.000000;
  int n = -2;
  cout << myPow(x, n);
  return 0;
}