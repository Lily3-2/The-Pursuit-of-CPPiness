// A bit flip of a number x is choosing a bit in the binary representation of x and flipping it from either 0 to 1 or 1 to 0.
//Given two integers start and goal, return the minimum number of bit flips to convert start to goal

// TC = O(max(start,goal)) , SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int minBitFlips(int start, int goal) {
  int count = 0;
  while(start > 0 && goal > 0) {
    if((start & 1) != (goal & 1)) {
      count++;
    }
    start = start >> 1;
    goal = goal >> 1;
  }

  while(start) {
    if(start & 1) {
      count++;
    }
    start >>= 1;
  }

  while(goal) {
    if(goal & 1) {
      count++;
    }
    goal >>= 1;
  }

  return count;

}

int main() {
  int start = 10;
  int goal = 7;
  cout << minBitFlips(start, goal);
  return 0;
}