//LC - 121. Best Time to Buy and Sell Stock
//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// TC = O(n) SC = O(1)

#include<bits/stdc++.h>
using namespace std;


int max_profit(vector<int> &prices){
    int b = INT_MAX; 
    int s = 0;
  //buy before sell
  for(int i = 0; i<prices.size(); i++){
    b = min(b, prices[i]);
    //calculate highest profit depending upon buying price
    s = max(s, prices[i]-b);

  }
  return s;
}

/*
//brute force
int max_profit(vector<int> &prices){
  int p = 0;
  for(int i=0; i<prices.size(); i++){
    for(int j = i + 1; j<prices.size(); j++){
      if(prices[j] > prices[i]) {
        p = max(prices[j] - prices[i], p);
      }
    }

  }
  return p;
}

*/


int main(){
  vector<int> arr ={7,1,5,3,6,4};
  cout<<max_profit(arr);
  return 0;
}