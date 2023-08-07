/* You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.
*/

// TC = O(log(m * n))

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int left = 0;
        int right = row * col -1;

        while(left <= right){
            int mid = (left+right)/2;
            int midVal = matrix[mid /col][mid % col];
            if(midVal == target) {
                    return true;
                }
            else if(midVal > target) {
                    right = mid - 1;
                }
            else{
                    left = mid + 1;
                }
            
        }
        return false;
}

/*

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i = 0; i< row ; i++) {
        int start = 0;
        int end = col - 1;
            while(start <= end){
                int mid = (start + end)/2;
                if(matrix[i][mid] == target) {
                    return true;
                }
                else if(matrix[i][mid] > target) {
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
        }
        return false;
    */

int main() {
  vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 3;

    cout << (searchMatrix(matrix, target) ? "True" : "False") << endl;
  return 0;
}