/*You are given an m x n binary matrix mat of 1's (representing soldiers) and 0's (representing civilians). The soldiers are positioned in front of the civilians. That is, all the 1's will appear to the left of all the 0's in each row.

A row i is weaker than a row j if one of the following is true:

The number of soldiers in row i is less than the number of soldiers in row j.
Both rows have the same number of soldiers and i < j.
Return the indices of the k weakest rows in the matrix ordered from weakest to strongest.
*/

//TC = O(m*n) SC = O(n)

#include<bits/stdc++.h>
using namespace std;

vector<int> kWeakestRows(vector<vector<int>> &mat, int k) {
  //store the count of 1 and the index of row in a paired vector
  vector<pair<int, int>> order;
  for(int i =0; i<mat.size(); i++) {
    int ones = 0;
    for(int j = 0; j<mat[0].size(); j++) {
      if(mat[i][j] == 1) {
        ones++;
      }
    }
    order.push_back(make_pair(ones, i));
  }
  sort(order.begin(), order.end());

  vector<int> ans;
  for(int i =0; i<k; i++) {
    ans.push_back(order[i].second);
  }
  return ans;
}

int main() {
  vector<vector<int>> arr = { {1,1,0,0,0},
                              {1,1,1,1,0},
                              {1,0,0,0,0},
                              {1,1,0,0,0},
                              {1,1,1,1,1}};
  vector<int> ans = kWeakestRows(arr, 3);
  for(auto itr: ans) {
    cout << itr << " ";
  }
  return 0;
}