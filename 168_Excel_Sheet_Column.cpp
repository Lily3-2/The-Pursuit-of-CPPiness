//Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

// A -> 1 , Z -> 26, AA -> 27
//TC & SC = O(log(columnNumber))

#include <bits/stdc++.h>
using namespace std;

string convertToTitle(int colNum) {
  string title;
  //we will follow 0 based indexing 
  while(colNum > 0) {
    char rem = 'A' + (colNum -1) % 26; // Adjusted to 0-based indexing
    title = rem + title; // prepend least significant char to title
    colNum = (colNum -1) / 26;
  }
  return title;
}

/*
string convertToTitle(int colNum) {
  string title;
  vector<char> alpha = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                                'I', 'J', 'K', 'L', 'M', 'N', 'O', 
                                'P', 'Q', 'R', 'S', 'T', 'U', 'V', 
                                'W', 'X', 'Y', 'Z'};
  while(colNum > 0) {
    char rem =  (colNum -1) % 26; // Adjusted to 0-based indexing
    title =alpha[rem] + title; // prepend least significant char to title
    colNum = (colNum -1) / 26;
  }
  return title;
}
*/

int main() {
  int colNum = 28;
  cout << convertToTitle(colNum);
  return 0;
}