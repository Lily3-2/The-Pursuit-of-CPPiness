// enqueue and dequeue operations
// TC = O(1) for enqueue and O(n) fro dequeue
//SC = O(n)
#include <bits/stdc++.h>
using namespace std;

class Queue {
  int rear;
  int front;
  int capacity;
  int *queue;
  public:
    Queue(int capacity) {
      this -> capacity = capacity;
      rear = 0;
      front = 0;
      queue = new int[capacity];
    }

    ~Queue() {
      delete[] queue;
    }
    //insert element at rear of queue;
    void qEnqueue(int x) {
      if(rear == capacity) {
        cout << "Queue is full"<< endl;
        return;
      }
      else {
        queue[rear] = x;
        rear++;
      }
    }
    // function to delete an element from front
    void qDequeue() {
      if(rear == front) {
        cout << "Queue is empty" << endl;
        return;
      }
      else{
        //shift all elements to left by 1 position after removing one element
        for(int i =0; i<rear -1 ; i++) {
          queue[i] = queue[i + 1];
        }
        //decreament rear
        rear--;
      }
    }

    void qDisplay() {
      if(front == rear) {
        cout << "queue is empty" << endl;
        return;
      }

      else {
        //traverse front to rear
        for(int i = front; i<rear; i++) {
          cout << queue[i] << endl;
        }
      }
      return;
    }

    void qFront() {
      if(rear == front) {
        cout << "queue is empty" <<endl;
        return;
      }
      cout << "front element of queue: " << queue[front] <<endl;
    }
};

int main() {
  Queue q(4);
  q.qDisplay();
  q.qEnqueue(5);
  q.qEnqueue(3);
  q.qEnqueue(15);
  q.qEnqueue(17);
  //display queue
  q.qDisplay();
  //insert more than capacity



  q.qFront();
  q.qDequeue();
  q.qFront();
  q.qEnqueue(20);
  q.qDisplay();
}