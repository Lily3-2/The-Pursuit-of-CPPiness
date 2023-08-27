//sort stack using recursion

// TC = O(n) and SC = O(n)

#include <bits/stdc++.h>
using namespace std;

void sortStack(stack<int> &st) {
  if(st.empty()) {
    return;
  }

  int x = st.top();
  st.pop();
  //recursively call sort stack until stack is empty and x holds value of each stack frame
  sortStack(st);

  // create a temporary stack
  stack<int> ts;

  //greatest element must always remain at the top of stack so push any value of x that is smaller than top below it
  while(!st.empty() && st.top() > x) {
    ts.push(st.top());
    st.pop();
  }
  //if stack is empty / after the stack has elements < x then
  st.push(x);

  //push all ts elements back to the stack
  while(!ts.empty()) {
    st.push(ts.top());
    ts.pop();
  }

}
int main() {
  stack<int> st;

    // Push elements into the stack
    st.push(34);
    st.push(3);
    st.push(31);
    st.push(98);
    st.push(92);
    st.push(23);

    sortStack(st);

    while(!st.empty()) {
      cout<< st.top() << endl;
      st.pop();
    }
  return 0;
}