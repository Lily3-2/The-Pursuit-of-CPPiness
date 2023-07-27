//Insert operation for linked list at beginning, middle and end of the list
// TC = O(1) to insert at beginnning and end, O(n) to insert at the end 
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data; //node has data
    Node* next; //next pointer of node
  //constructor
  Node(int data){
    this -> data = data;
    this -> next = NULL;
  }
};

//insert at Head
void insertAtHead(Node* &head, int data){
  //create a new node
  Node* temp = new Node(data);
  temp -> next = head;
  head = temp;
}

void insertAtTail(Node* &tail, int data) {
  //create a new node
  Node* temp = new Node(data);
  tail ->next = temp;
  tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d) {
  //insert at start
  if (position == 1) {
    insertAtHead(head, d);
    return;
  }
  Node* temp = head;
  int cnt  = 1;
  //reach that position
  while(cnt < position-1) {
    temp = temp ->next;
    cnt++;
  }
  //insert at last postion and update tail
  if (temp->next == NULL){
    insertAtTail(tail, d);
    return;
  }
  //insert at middle
  //create a node for d
  Node* nodeToInsert = new Node(d);
  nodeToInsert -> next = temp -> next;
  temp -> next = nodeToInsert;
}

//traverse through the list
void printList(Node* &head) { //reference is passed to not create a copy
  //create a temp pointer
  Node* temp = head;
  while(temp!= NULL) {
    cout << temp-> data<<" ";
    temp = temp -> next;
  }
  cout<<endl;
}

int main() {
  //create a new node(object of Node class)
  Node* node1 = new Node(10);
  //point head to the node1;
  Node* head = node1;
  Node* tail = node1;
  //print the list
  printList(head);

  insertAtTail(tail, 15);
  printList(head);

  insertAtTail(tail, 20);
  printList(head);

  insertAtPosition(head, tail, 4, 1);
  printList(head);
}