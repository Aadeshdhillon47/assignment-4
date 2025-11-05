#include <iostream>
using namespace std;
int main() {
string s = "aabc";
int freq[26] = {0};
char q[100];
int front = 0, rear = -1;
for (int i = 0; i < s.length(); i++) {
char ch = s[i];
freq[ch - 'a']++;
rear++;
q[rear] = ch;
while (front <= rear && freq[q[front] - 'a'] > 1) {
front++;
}
if (front > rear) cout << "-1 ";
else cout << q[front] << " ";
}
return 0;
}
