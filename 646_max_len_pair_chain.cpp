// 646 Maximum Length of Pair Chain
//ou are given an array of n pairs pairs where pairs[i] = [lefti, righti] and lefti < righti.

// A pair p2 = [c, d] follows a pair p1 = [a, b] if b < c. A chain of pairs can be formed in this fashion.

// Return the length longest chain which can be formed.

// TC = O(n logn) SC = (1)

#include <bits/stdc++.h>
using namespace std;

static bool compare(vector<int>&e1, vector<int>&e2) {
  return e1[1] < e2[1];
}

int findLongestChain(vector<vector<int>> &pairs) {
  int prev = 0; //store the index from the array that is included in the chain
  int length = 1;

  sort(pairs.begin(), pairs.end(), compare);

  for(int i = 1; i < pairs.size(); i++){
    if(pairs[prev][1] < pairs[i][0]) {
      prev = i;
      length++;
    }
  }
  return length;
}

int main() {
  vector<vector<int>> pairs;
  int n = 3;
  for(int i =0; i<n; i++) {
    vector<int> row;
    for(int i =0 ; i < 2; i++) {
      int a;
      cin >> a;
      row.push_back(a);
    }
    pairs.push_back(row);
  }
  cout<< findLongestChain(pairs);
  return 0;
}