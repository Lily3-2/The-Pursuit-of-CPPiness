#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* removeElements(ListNode* head, int val) {
    if(head == nullptr) {
        return head;
    }
    //base case
    while(head!=nullptr && head -> val == val) {
        head = head -> next;
    }



    ListNode* prev = NULL;
    ListNode* curr = head;
    while(curr != nullptr) {
        if(curr -> val == val) {
            prev ->next  = curr -> next;
            curr = curr -> next;
        }
        else {
            prev = curr;
            curr = curr -> next;
        }
    }

    return head;
}

// Function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
  // Creating a linked list for testing
    ListNode* head = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(6);
    ListNode* node4 = new ListNode(3);
    ListNode* node5 = new ListNode(4);
    ListNode* node6 = new ListNode(5);
    ListNode* node7 = new ListNode(6);

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;

    cout << "Original Linked List: ";
    printList(head);

    int valToRemove = 6;

    ListNode* newHead = removeElements(head, valToRemove);
    printList(newHead);

  return 0;
}