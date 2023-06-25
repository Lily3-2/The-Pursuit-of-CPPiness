// LC - 1903. Largest Odd Number in String

//You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.

#include<bits/stdc++.h>
using namespace std;

string longestOddNumber(string num) {
  for(int i = num.length()-1 ; i>= 0; i--) {
    if(num[i] % 2 == 0){
      num.pop_back();
    }
    else{
      break;
    }
  }
  return num;
}

int main() {
  string num = "52";
  cout << longestOddNumber(num);
  return 0;
}