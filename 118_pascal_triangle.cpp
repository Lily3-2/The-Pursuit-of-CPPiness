// LC - 118. Pascal's Traingle
// Given an integer numRows, return the first numRows of Pascal's triangle.
// TC & SC = O(n^2)

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
  if(numRows == 0) {
    return {};
  }

  vector<vector<int>> pascal;

  for(int i =0; i<numRows; i++ ){
    vector<int> curr(i+1, 1);
    for(int j = 1; j<i; j++) {
      curr[j] = pascal[i-1][j-1] + pascal[i-1][j];
    }
    pascal.push_back(curr);
  }
  return pascal;
}

int main() {
  int numRows = 5;
  vector<vector<int>> pascal = generate(numRows);
  for(int i =0; i<pascal.size(); i++) {
    for(int j =0; j< pascal[i].size(); j++) {
      cout << pascal[i][j] << " ";
    }
    cout <<endl;
  }
  return 0;
}