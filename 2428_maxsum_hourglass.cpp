//LC - 2428. Maximum Sum of an Hourglass
// You are given an m x n integer matrix grid. We define an hourglass as a part of the matrix.
//Return the maximum sum of the elements of an hourglass.

// TC =  O((rows - 2) * (cols - 2)) & SC = O(1) 

#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<vector<int>> & matrix) {
  int max_sum = INT_MIN;
  int rows = matrix.size();
  int cols = matrix[0].size();

  for(int i =0; i<rows -2; i++) {
    for(int j = 0; j<cols - 2; j++) {
      int sum = matrix[i][j] + matrix[i][j+1] +matrix[i][j+2] + matrix[i+1][j+1] +matrix[i+2][j] + matrix[i+2] [j+1] +matrix[i+2][j+2];
      max_sum = max(sum, max_sum);
    }
  }
  return max_sum;

}

int main(){
  vector<vector<int>> matrix;
  int rows;
  int cols;
  cin >> rows;
  cin >> cols;
  for(int i =0; i<rows; i++) {
    vector<int> rowe;
    for(int j = 0; j<cols; j++) {
      int a;
      cin>> a;
      rowe.push_back(a);
    }
    matrix.push_back(rowe);
  }

  cout << maxSum(matrix);
}