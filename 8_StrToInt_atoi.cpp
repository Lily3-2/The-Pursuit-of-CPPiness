//Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).

// TC = O(n) SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int myatoi(string s) {
  int result = 0;
  int i = 0; //current position in string

  // skip all the whitespaces
  while(s[i] == ' ') {
    i++;
  }

  // check if the number is negative
  bool negative = false;
  if((s[i] == '+') || (s[i] == '-')) {
    negative = (s[i] == '-');
    i++;
  }

  // only consider the digits and skip alphabets
  while( i< s.length() && isdigit(s[i])) {
    int digit = s[i] - '0';
    if( result > (INT_MAX - digit) / 10) {
      return (negative) ? INT_MIN: INT_MAX;
    }
    result = result * 10 + digit;
    i++;
  }

  if(negative) {
    result = -result;
  }

  return result;
}

int main() {
  string s = "4193 with words";
  cout << myatoi(s) << endl;
  return 0;
}