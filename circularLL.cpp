#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node* next;

  Node(int d) {
    this -> data = d;
    this -> next = NULL;
  }

  ~Node(){
    if(this-> next != NULL){
      this -> next = NULL;
      delete next;
    }
  }
};

void insertNode(Node* &tail, int element, int d) {
//assuming element is in the list

  //list is empty
  if(tail == NULL){
    Node* newNode = new Node(d);
    tail = newNode;
    newNode -> next = newNode;
  }
  else {
    //non - empty list
    Node* curr = tail;
    while(curr -> data != element) {
      curr =  curr -> next;
    }
    //elemet is found and cuurent is on the element
    Node* temp = new Node(d);
    temp -> next = curr -> next;
    curr -> next = temp;
  }

}

void deleteNode(Node* &tail, int val) {
  //if List is Empty - 0 Node
  if(tail == NULL) {
    return;
  }

  else {
    Node* prev = tail;
    Node* curr = prev -> next;
    while(curr -> data != val) {
      prev = curr;
      curr = curr -> next;
    }
    prev -> next = curr -> next;
    //1 Node is present
    if(curr == prev) {
      tail = NULL;
    }
    else if (curr == tail) {
        tail = prev;
    }
    curr -> next = NULL;
    delete curr;

    }
  }


void print(Node* tail) {
  Node* temp = tail;

  if(tail == NULL) {
    cout <<"List is empty";
    return;
  }

  do{
    cout << tail -> data << " ";
    tail = tail -> next;
  }
  while(tail != temp);

  cout<<endl;
}

int main(){
  Node* tail = NULL;

  //insert in empty list
  insertNode(tail, 5, 3);
  print(tail);

  insertNode(tail, 3, 5);
  print(tail);

  insertNode(tail, 5, 7);
  print(tail);

  insertNode(tail, 3, 4);
  print(tail);

  insertNode(tail, 5, 6);
  print(tail);

  insertNode(tail, 7, 9);
  print(tail);

  deleteNode(tail, 3);
  print(tail);
}