//reverse stack using recursion

#include<bits/stdc++.h>
using namespace std;

void reverseStack(stack<int> &st) {
  if(st.empty()) {
    return;
  }

  int x = st.top();
  st.pop();

  reverseStack(st);

  stack<int> ts;

  while( !st.empty() ) {
    ts.push(st.top());
    st.pop();
  }

  st.push(x);

  while( !ts.empty()) {
    st.push(ts.top());
    ts.pop();
  }
}
int main() {
  stack<int> st;
  // 5 at the bottom and 1 at the top
  st.push(5);
  st.push(4);
  st.push(3);
  st.push(2);
  st.push(1);

  reverseStack(st);

  while(!st.empty()) {
    cout << st.top() << endl;
    st.pop();
  }
}