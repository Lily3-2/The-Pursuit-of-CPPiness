// LC - 234 Palindrome Linked List

// Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

// TC = O(n) SC =O(1)

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
  int data;
  Node* next;
  Node(int data) {
    this-> data = data;
    this -> next = NULL;
  }
};

void insertAtTail(Node* &tail, int d) {
  if(tail == NULL) {
    Node* temp = new Node(d);
    tail = temp;
  }
  else{

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
  }
}
//reverse the middle half
Node* reverseList(Node* head) {
  Node* prev = NULL;
  Node* curr = head;
  Node* nextn;
  while(curr != NULL) {
    nextn = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = nextn;
  }
  return prev;
}

bool isPalindrome(Node* head) {
  //find the middle node
  Node* slow = head;
  Node* fast = head;
  while(fast != NULL && fast -> next != NULL) {
    slow = slow-> next;
    fast = fast -> next -> next;
  }
  //after spliting in half reverse the half node
  Node* secondHalf = reverseList(slow);

  Node* p1 = head;
  Node* p2 = secondHalf;

  while(p2 != NULL) {
    if(p2 -> data != p1-> data) {
      return false;
    }
    p2 = p2-> next;
    p1 = p1-> next;
  }
  return true;
}

void printList(Node* &head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp -> data << " ";
    temp = temp-> next;
  }
  cout << endl;
}

int main() {
  Node* node1 = new Node(1);
  Node* tail = node1;
  Node* head = node1;
  insertAtTail(tail, 2);
  insertAtTail(tail, 2);
  insertAtTail(tail, 1);
  printList(head);
  cout << isPalindrome(head);
  return 0;

}