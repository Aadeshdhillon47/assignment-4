#include <iostream>
using namespace std;
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;
void enqueue(int val) {
if (rear == SIZE - 1) {
cout << "Queue is full\n";
return;
}
if (front == -1) front = 0;
rear++;
queue[rear] = val;
}
void dequeue() {
if (front == -1 || front > rear) {
cout << "Queue is empty\n";
return;
}
front++;
}
void isEmpty() {
if (front == -1 || front > rear) cout << "Yes\n";
else cout << "No\n";
}
void isFull() {
if (rear == SIZE - 1) cout << "Yes\n";
else cout << "No\n";
}
void display() {
if (front == -1 || front > rear) {
cout << "Queue is empty\n";
return;
}
for (int i = front; i <= rear; i++) {
cout << queue[i] << " ";
}
cout << endl;
}
void peek() {
if (front == -1 || front > rear) {
cout << "Queue is empty\n";
return;
}
cout << queue[front] << endl;
}
int main() {
int ch, val;
while (1) {
cout << "\n1.Enqueue\n2.Dequeue\n3.IsEmpty\n4.IsFull\n5.Display\n6.Peek\n7.Exit\n";
cin >> ch;
if (ch == 1) {
cin >> val;
enqueue(val);
} else if (ch == 2) {
dequeue();
} else if (ch == 3) {
isEmpty();
} else if (ch == 4) {
isFull();
} else if (ch == 5) {
display();
} else if (ch == 6) {
peek();
} else if (ch == 7) {
break;
}
}
return 0;
  }
