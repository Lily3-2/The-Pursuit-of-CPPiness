// 2849. Determine if a Cell Is Reachable at a Given Time

/*
In an infinite 2D grid, you start at the cell (sx, sy). Each second, you must move to any of its adjacent cells.
Return true if you can reach cell (fx, fy) after exactly t seconds, or false otherwise.

Input: sx = 3, sy = 1, fx = 7, fy = 3, t = 3
Output: false
Explanation: Starting at cell (3, 1), it takes at least 4 seconds to reach cell (7, 3) by going through the cells depicted in the picture above. Hence, we cannot reach cell (7, 3) at the third second.
*/

//TC & SC = O(n)

#include <bits/stdc++.h>
using namespace std;

bool isReachableTime(int sx, int sy, int fx, int fy, int t) {
  int x = abs(fx-sx);
  int y = abs(fy - sy);

  if(x== 0 && y == 0) {
    if(x!= 1) {
      return true;
    }
    return false;
  }

  if( x > t || y> t) {
    return false;
  }
  return true;
}

int main() {
  //starting point
  int sx = 3, sy =1;
  //destination point 
  int fx = 7, fy = 3;
  //time to reach
  int t = 6;
  cout << isReachableTime(sx, sy, fx, fy, t);
  return 0;
}