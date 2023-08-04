#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* prev;
    Node* next;

  Node( int data) {
    this -> data = data;
    this -> next = NULL;
    this -> prev = NULL;
  }
};
//insert at Head
void insertAtHead (Node* &head, Node* &tail, int d) {
  if(head == NULL) {
    Node* temp = new Node(d);
    head = temp;
    tail = temp;
  }
  else {
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
  }
  
}

//insert at Tail
void insertAtTail (Node* &head, Node* &tail, int d) {
  if(tail == NULL) {
    Node* temp = new Node(d);
    head = temp;
    tail = temp;
  }
  else {
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
  }
  
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d ) {
  if(position == 1) {
    insertAtHead(head, tail, d);
    return;
  }
  int cnt = 1;
  Node* temp = head;
  while(cnt < position -1) {
    cnt++;
    temp = temp -> next;
  }
  if(temp -> next == NULL) {
    insertAtTail(head, tail, d);
    return;
  }
  Node* nodeToInsert = new Node(d);
  nodeToInsert -> next = temp -> next;
  temp ->next ->prev = nodeToInsert;
  temp -> next = nodeToInsert;
  nodeToInsert -> prev = temp;
}

void print(Node* &head) {
  Node* temp = head;
  while (temp!= NULL) {
    cout << temp -> data <<" ";
    temp = temp -> next;
  }
  cout<< endl;
}

int getLength(Node* &head) {
  Node* temp = head;
  int len = 0;
  while (temp!= NULL){
    len++;
    temp = temp -> next;
  }
  return len;
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;
  print(head);
//insert at Head
  insertAtHead(head, tail,  11);
  print(head);

  insertAtHead(head, tail,  9);
  print(head);

  insertAtHead(head, tail,  7);
  print(head);
  

  insertAtTail(head, tail, 15);
  print(head);

  insertAtPosition(head, tail, 5, 100);
  print(head);
  cout << "Length: "<< getLength(head) << endl;

  return 0;
}
