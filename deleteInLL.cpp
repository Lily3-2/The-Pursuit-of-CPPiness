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
  ~Node(){
    int value = this -> data;
    if(this-> next != NULL){
      delete next;
      this -> next = NULL;
    }
  }
};

void insertAtHead(Node* &head, int data) {
  Node* node1 = new Node(data);
  node1 -> next = head;
  head = node1;
}

void insertAtTail(Node* &tail, int data) {
  Node* node1 = new Node(data);
  tail -> next = node1;
  tail = node1;
}

void insertAtposition(Node* &head, Node* &tail, int position, int data) {
  if(position == 1) {
    insertAtHead(head, data);
    return;
  }
  int count = 1;
  Node* temp = head;
  if(count < position -1) {
    temp = temp -> next;
    count++;
  }
  if(temp ->  next == NULL) {
    insertAtTail(tail, data);
    return;
  }
  Node* nodetoInsert = new Node(data);
  nodetoInsert -> next = temp -> next;
  temp -> next = nodetoInsert;
} 

void deleteNode(Node* &head, int position) {
  if(position == 1) {
    Node* temp = head;
    head = head -> next; 
    temp -> next = NULL;
    delete temp;
    
  }
  else{
    Node* prev = NULL;
    Node* current = head;
    int count = 1;
    while(count< position) {
      count++;
      prev = current;
      current = current -> next;
    }
    prev -> next = current -> next;
    current -> next = NULL;
    delete current;
  }
}

void printList(Node* &head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout<<endl;
}

int main() {
  Node* node1 = new Node(21);
  Node* head = node1;
  Node* tail = node1;
  printList(head);
  insertAtHead(head, 23);
  printList(head);
  insertAtposition(head, tail, 4, 25);
  printList(head);
  deleteNode(head, 1);
  printList(head);
  return 0;
}