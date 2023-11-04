// 1503 Moment Before All Ants Fall Out of a Plank

/*We have a wooden plank of the length n units. Some ants are walking on the plank, each ant moves with a speed of 1 unit per second. Some of the ants move to the left, the other move to the right.

When two ants moving in two different directions meet at some point, they change their directions and continue moving again. Assume changing directions does not take any additional time.

When an ant reaches one end of the plank at a time t, it falls out of the plank immediately.

Given an integer n and two integer arrays left and right, the positions of the ants moving to the left and the right, return the moment when the last ant(s) fall out of the plank.

 */

/*
APPROACH
Suppose you have a plank of length n = 10, and you have two ants with positions:

Ant 1 at position 2 (moving to the right).
Ant 2 at position 6 (moving to the left).
Here's how you can calculate the earliest moment when all ants have fallen off:

Encode Ant Directions: Since ant 1 is moving to the right and ant 2 is moving to the left, we can treat them as if they are both moving in one direction. We'll choose a common direction, which in this case will be to the right. We'll calculate the time it takes for each ant to fall off the plank while moving to the right.

Calculate Maximum and Minimum Times:

For Ant 1 at position 2:

Maximum time = max(2, 10 - 2) = max(2, 8) = 8
Minimum time = min(2, 10 - 2) = min(2, 8) = 2
For Ant 2 at position 6:

Maximum time = max(6, 10 - 6) = max(6, 4) = 6
Minimum time = min(6, 10 - 6) = min(6, 4) = 4
Find the Maximum of Minimums:

The maximum of the minimum times is max(2, 4) = 4.
So, in this example, the earliest moment when all ants have fallen off the plank while moving in one direction (to the right) is 4 seconds.
*/

#include <bits/stdc++.h>
using namespace std;

int getLastMoment(int n, vector<int> left, vector<int> right) {
  int time = 0;

  for(int i =0; i<left.size(); i++) {
    if(left[i] > time) {
      time = left[i];
    }
  }

  for(int i =0; i<right.size(); i++) {
    int pos = n - right[i];
    time = max(time, pos);
  }

  return time;
  
}

int main() {
  int n = 4;
  vector<int> left = {4,3};
  vector<int> right = {0,1};
  cout << getLastMoment(n, left, right) ;
  return 0;
}