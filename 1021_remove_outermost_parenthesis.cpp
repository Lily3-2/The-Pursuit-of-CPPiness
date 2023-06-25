//LC - 1021. Remove Outermost Parentheses
//Input: s = "(()())(())"  ===>   Output: "()()()"


// TC - O(n) and SC - O(n)

#include<bits/stdc++.h>
using namespace std;


string removeOuterParentheses(string s){
  string ans ="";
  int p = 0;
  for(char c:s){
     if(c == '('){
        p++;
    }
      if(p>1){
        ans += c;
      }
    
      if(c == ')') {
        p--;

      }
  }
    return ans;
  
}
/*
string removeOuterParentheses(string s){
  stack<char> st;
  string ans = "";
  for(int i =0; i<s.length(); i++){
    if(s[i] == '('){
      st.push(s[i]);
    }
    if(st.size()>1){
      ans += s[i];
    }
    if(s[i] == ')'){
      st.pop();
    }
  }
  return ans;
}
*/
int main(){
  string s = "(()())(())";
  string ans = removeOuterParentheses(s);

    cout<<ans<<endl;

  return 0;
}