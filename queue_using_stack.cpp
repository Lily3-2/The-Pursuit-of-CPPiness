//quque using 2 stacks
// TC = O(n) and SC=(n)

#include<bits/stdc++.h>
using namespace std;

/* making enqueue costly ... push = O(n) and pop(1)
class Stack {
  stack<int> st1, st2;
  public:
    void push(int x) { //enqueue
      while(!st1.empty()) {
        st2.push(st1.top());
        st1.pop();
      }
      st1.push(x);
      while( !st2.empty()) {
        st1.push(st2.top());
        st2.pop();
      }
    }

    int pop() { //dequeue
      if(st1.empty()) {
        return -1;
      }
      int x = st1.top();
      st1.pop();
      return x;
    }

    int top() {
      if(st1.empty()) {
        return -1;
      }
      return st1.top();
    }

};
*/
//making dequeue costly >> better ..push =O(1) and pop(n)
class Stack {
  stack<int> st1, st2;
  public:
    void push(int x) { //enqueue
      st1.push(x);
    }

    int pop() { //dequeue
      if(st1.empty() && st2.empty()) {
        return -1;
      }
      if(st2.empty()) {
        while(!st1.empty()) {
          st2.push(st1.top());
          st1.pop();
        }
      }
      
      int x = st2.top();
      st2.pop();
      return x;
    }

    int top() {
      if(st2.empty()) {
        return -1;
      }
      return st2.top();
    }
};

int main() {
  Stack st;
  st.push(3);
  st.push(2);
  st.push(5);
  cout << st.pop() <<endl;
  cout << st.top();
  
}