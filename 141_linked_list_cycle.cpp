// Given head, the head of a linked list, determine if the linked list has a cycle in it.

// TC = O(n) SC = O(1)

#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
  Node(int data){
    this-> data = data;
    this-> next = NULL;
  }
};

bool hasCycle(Node* head) {
  Node* slow = head;
  Node* fast = head;
  if(head == NULL) {
    return false;
  }

  while(fast != NULL && fast-> next != NULL) {
    slow = slow -> next;
    fast = fast -> next -> next;
    if(fast == slow) {
      return true;
    }
  }
  return false;
}

/*

TC = O(n) SC = O(n)

bool hasCycle(Node* head) {
  set<Node*> st;
  while(head != NULL){
    if(st.find(head) != st.end()){
      return true;
    }
    st.insert(head);
    head = head-> next;
  }
  return false;
}
*/
int main() {
  // code to insert node
}
