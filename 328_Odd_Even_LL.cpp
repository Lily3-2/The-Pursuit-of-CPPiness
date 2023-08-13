// Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list. 
//The first node is considered odd, and the second node is even, and so on. 
//Note that the relative order inside both the even and odd groups should remain as it was in the input.

//SC = O(1) and TC = O(n)

#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node* next;

  Node(int data) {
    this-> data = data;
    this-> next = NULL;
  }
};

Node* oddEvenList(Node* head) {
  if(head == NULL || head -> next == NULL) {
    return head;
  }

  Node* oddHead = NULL;
  Node* oddTail = NULL;
  Node* evenHead = NULL;
  Node* evenTail = NULL;

  Node* curr = head;
  int idx= 1;
  while(curr != NULL) {
    if( idx % 2== 1) {
      if(oddTail ==  NULL) {
        oddTail = curr;
        oddHead = curr;
      }
      else{
        oddTail-> next = curr;
        oddTail = curr;
      }
    }
    else {
      if(evenTail == NULL) {
        evenHead = curr;
        evenTail = curr;
      }
      else{
        evenTail -> next = curr;
        evenTail= curr;
      }
    }
    idx++;
    curr = curr -> next;
  }
  evenTail -> next = NULL;
  oddTail -> next = evenHead;
  return oddHead;
}

int main() {
  return 0;
}