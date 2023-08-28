//

#include <bits/stdc++.h>
using namespace std;

class Stack {
  int size;
  int top;
  int *arr;
  public:
    Stack() {
      size = 100;
      top = -1;
      arr = new int[size];
    }

    void push(int x) {
      top++;
      arr[top] = x;
    }

    int Top() {
      return arr[top];
    }

    int pop() {
      int x = arr[top];
      top--;
      return x;
    }

    int Size() {
      return top +1;
    }
};
//push


//pop

int main() {
  Stack st;
  st.push(3); //3 is at the bottom
  st.push(12);
  st.push(7);
  st.push(2); //2 is at the top

  cout << "Top of stack is " << st.Top() << endl;
  cout << "Size of stack before deleting any element " << st.Size() << endl;
  cout << "The element deleted is " << st.pop() << endl;

  cout<< "Top of stack after deleting an element " << st.Top() << endl;
  cout << "Size : " << st.Size() << endl;
  return 0;
}