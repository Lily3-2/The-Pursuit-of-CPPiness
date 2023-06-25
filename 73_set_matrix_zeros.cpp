// LC - 73. Set Matrix Zeroes

// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

#include <bits/stdc++.h>
using namespace std;

//better approach
//TC = O(n*m)
//SC = O(n+m)
void setZeros(vector<vector<int>> &matrix){
  int rows = matrix.size();
  int cols = matrix[0].size();
  unordered_set<int> row0;
  unordered_set<int> col0;

  for(int i =0 ; i< rows; i++){
    for(int j = 0; j<cols; j++){
      if(matrix[i][j] == 0){
        row0.insert(i);
        col0.insert(j);
      }
    }
  }

  for(int i =0 ; i< rows; i++){
    for(int j = 0; j<cols; j++){
      if(row0.count(i) > 0 || col0.count(j) > 0){
        matrix[i][j] = 0;
      }
    }
  }
}



/*
//brute force with TC = O(n*m) *(n+m) and SC =(m*n)
void setZeros(vector<vector<int>> &matrix) {
  int rows = matrix.size();
  int cols = matrix[0].size();
  vector<vector<int>> temp = matrix;
//set corresponding rows to 0
  for(int i =0 ; i< rows; i++){
    for(int j = 0; j<cols; j++){
      if(matrix[i][j] == 0){
        for(int k = 0; k<rows; k++){
          temp[k][j] = 0;
        }
      }
    }
  }
//set corresponding columns to 0
  for(int i =0 ; i< rows; i++){
      for(int j = 0; j<cols; j++){
        if(matrix[i][j] == 0){
          for(int k = 0; k<cols; k++){
            temp[i][k] = 0;
          }
       }
    }
  }
  //make changes to main matrix
  for(int i =0 ; i< rows; i++){
    for(int j = 0; j<cols; j++){
      matrix[i][j] = temp[i][j];
    }
  }
}
*/

int main() {
  vector<vector<int>> matrix;
  //rows
  int m;
  //coulmns
  int n;
  cin >> m;
  cin >> n;
  //take matrix as input
  int a;
  for(int i = 0; i<m ; i++){
    vector<int> row;
    for(int j =0; j<n; j++) {
      cin>> a;
      row.push_back(a);
    }
    matrix.push_back(row);
  }
  setZeros(matrix);
  for(int i =0; i<m; i++){
    for (int j = 0; j< n; j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
} 


