//stack using queue
//TC = O(n) SC = O(1)

#include <bits/stdc++.h>
using namespace std;

// using 1 queue
/*
class Queue {
  queue<int> q;
  public: 
    void push(int x) {
      int s = q.size();
      q.push(x);
      for(int i =0; i<s; i++) {
        q.push(q.front());
        q.pop();
      }
    }

    int pop() {
      if(q.empty()) {
        return -1;
      }
      int x = q.front();
      q.pop();
      return x;
    }

    int front() {
      if(q.empty()) {
        return -1;
      }
      return q.front();
    }

};

*/

// using 2 queues

class Queue {
  queue<int> q1, q2;
  public:
    void push(int x) {
      q2.push(x);
      while(!q1.empty()) {
        q2.push(q1.front());
        q1.pop();
      }
      queue<int> q = q1;
      q1 = q2;
      q2 = q;
    }

    int pop() {
      if(q1.empty()) {
        return -1;
      }
      int x = q1.front();
      q1.pop();
      return x;
    }

    int front() {
      if(q1.empty()) {
        return -1;
      }
      return q1.front();
    }
};

int main() {
  Queue q;
  q.push(2);
  q.push(9);
  q.push(5);
  cout << q.pop() <<endl;
  cout<< q.front() << endl;
  return 0;
}