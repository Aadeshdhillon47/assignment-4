#include <iostream>
using namespace std;
int q1[100], q2[100];
int front1 = -1, rear1 = -1;
int front2 = -1, rear2 = -1;
void push(int val) {
if (front1 == -1) front1 = 0;
q1[++rear1] = val;
}
void pop() {
if (front1 == -1 || front1 > rear1) {
cout << "Stack is empty\n";
return;
}
front2 = 0;
rear2 = -1;
while (front1 < rear1) {
q2[++rear2] = q1[front1++];
}
cout << q1[front1] << endl;
front1 = 0;
rear1 = -1;
for (int i = front2; i <= rear2; i++) {
q1[++rear1] = q2[i];
}
}
void display() {
for (int i = rear1; i >= front1; i--) {
cout << q1[i] << " ";
}
cout << endl;
}
int main() {
push(10);
push(20);
push(30);
display();
pop();
display();
return 0;
}
