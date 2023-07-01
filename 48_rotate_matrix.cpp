// LC - 48. Rotate Image
// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// TC - O(n^2)
// SC - O(1)

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix) {
  //transpose the arrays
  for(int i =0; i<matrix.size(); i++){
    for(int j =0; j<= i; j++){
      swap(matrix[i][j], matrix[j][i]);
    }
  }
//reverse the arrays
  for(int i = 0; i<matrix.size(); i++){
    reverse(matrix[i].begin(), matrix[i].end());
  }
}

int main() {
  int n;
  int m;
  cin>>n;
  cin >> m;
  vector<vector<int>> matrix;
  for(int i =0; i<n; i++){
    vector<int> rows;
    for(int j = 0; j<m; j++){
      int a;
      cin>> a;
      rows.push_back(a);
    }
    matrix.push_back(rows);
  }
  rotate(matrix);
  for(int i =0; i<n; i++) {
    for(int j =0; j<m; j++){
      cout<<matrix[i][j]<< " ";
    }
    cout<<endl;
  }
  return 0;
}