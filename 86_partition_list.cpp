// Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

// You should preserve the original relative order of the nodes in each of the two partitions.

// TC = O(n)  SC = O(1)

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
  Node(int data) {
    this -> data = data;
    this -> next = NULL;
  }
};

Node* partition (Node* &head, int x) {
  Node* DummyLess = new Node(0);
  Node* DummyGreater = new Node(0);

  Node* curr = head;
  Node* less = DummyLess;
  Node* greater = DummyGreater;

  while(curr != NULL) {
    if(curr -> data < x) {
      less -> next = curr;
      less = curr;
    }
    else {
      greater -> next = curr;
      greater = curr;
    }
    curr = curr -> next;
  }

  greater -> next = NULL;
  less -> next = DummyGreater -> next;

  head = DummyLess -> next;
  return head;
}

void print(Node* &head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp -> data <<" ";
    temp = temp -> next;
  }
  cout<< endl;
}

int main() {
  Node* head = new Node(1);
  head->next = new Node(4);
  head->next->next = new Node(3);
  head->next->next->next = new Node(2);
  head->next->next->next->next = new Node(5);
  head->next->next->next->next->next = new Node(2);

  print(head);
  head = partition(head, 3);
  print(head);
  return 0;
}

