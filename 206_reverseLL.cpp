// given the head of a singly Linked LIst , return the reversed list

// TC = O(n) and SC = O(1)

#include <bits/stdc++.h>
using namespace std;

class Node{
  public: 
    int data;
    Node* next;
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

Node* reverseList(Node* head) {
  Node* prev = NULL;
  Node* curr = head;
  Node* nextn;

  while(curr != NULL) {
    nextn = curr -> next;
    curr-> next = prev;
    prev = curr;
    curr = nextn;
  }
  return prev;
}
void print(Node* head) {
  Node* temp = head;
  while(temp!= NULL) {
    cout<<temp-> data<<" ";
    temp = temp-> next;
  }
  cout<< endl;
}

int main() {
  Node* head = new Node(1);
  head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
  head = reverseList(head);
  print(head);

  return 0;
}