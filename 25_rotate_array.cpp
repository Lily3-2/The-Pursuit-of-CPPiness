//rotate elements to the left -LC 189
//   1, 2, 3, 4, 5
//   2, 3, 4, 5, 1
#include <bits/stdc++.h>
using namespace std;


void rotateArr(vector<int> &arr, int k) {
  if(arr.size() == 0) return;

  k = k % arr.size();
  reverse(arr.begin(), arr.end());

  reverse(arr.begin(), arr.begin()+k);

  reverse(arr.begin()+ k, arr.end());
}

/*

void rotateArr(vector<int> &arr, int k){
  vector<int> ans;
  for(int i = 0; i < arr.size(); i++) {
    ans.push_back(arr[(i + k + arr.size()) % arr.size()]);

  }
  for (int i= 0; i < ans.size(); i++) {
    cout << ans[i]<<" ";
  }

}

*/

int main() {
  vector <int> arr {1, 2, 3, 4, 5, 6, 7};
  rotateArr(arr, 3);
  for (int i= 0; i < arr.size(); i++) {
    cout << arr[i]<<" ";
  }

  return 0;
}