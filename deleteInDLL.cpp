#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node* prev;

  Node(int data) {
    this-> data = data;
    this->prev = NULL;
    this->next = NULL;
  }
  ~Node() {
    if(this->next != NULL){
      this -> next = NULL;
      this -> prev = NULL;
      delete next;
      delete prev;
    }
  }
};

void insertAtHead(Node* &head, Node* &tail, int d) {
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

void insertAtTail(Node* &head, Node* &tail, int d) {
  if(tail == NULL) {
    Node* temp = new Node(d);
    head = temp;
    tail = temp;
  }
  else{
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
  }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d) {
  if(position == 1) {
    insertAtHead(head, tail, d);
    return;
  }
  int cnt =1;
  Node * temp = head;
  while(cnt < position - 1){
    cnt++;
    temp = temp -> next;
  }
  if(temp -> next == NULL) {
    insertAtTail(head, tail, d);
    return;
  }

  Node* nodeToInsert = new Node(d);
  nodeToInsert -> next = temp -> next;
  temp ->next -> prev = nodeToInsert;
  nodeToInsert -> prev = temp;
  temp -> next = nodeToInsert;
}

void deleteNode(Node* &head, Node* &tail, int position) {
  if (position == 1) {
    Node* temp = head;
    head = head -> next;
    temp -> next -> prev = NULL;
    temp -> next = NULL;
    delete temp;
  }
  else {
    Node* prevn = NULL;
    Node* curr = head;
    int cnt = 1;
    while( cnt < position) {
      prevn = curr;
      curr = curr -> next;
      cnt++;
    }
    curr -> next -> prev = prevn; // dont use this line if deleteing last node
    prevn -> next = curr -> next;
    curr -> next = NULL;
    curr -> prev = NULL;
    delete curr;

  }
  
}

void print(Node* &head) {
  Node* temp = head;
  while(temp != NULL){
    cout<< temp ->data <<" ";
    temp = temp -> next;
  }
  cout<< endl;
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;

  insertAtHead(head, tail, 20);
  print(head);
  insertAtHead(head, tail, 10);
  print(head);

  insertAtTail(head, tail, 25);
  print(head);
  insertAtTail(head, tail, 30);
  print(head);

  insertAtPosition(head, tail, 2, 15);
  print(head);

  insertAtPosition(head, tail, 6, 35);
  print(head);

  deleteNode(head, tail, 4);
  print(head);
}