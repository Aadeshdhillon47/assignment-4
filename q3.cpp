#include <iostream>
using namespace std;
int main() {
int arr[] = {4, 7, 11, 20, 5, 9};
int n = 6;
int first[3], second[3];
for (int i = 0; i < 3; i++) {
first[i] = arr[i];
}
for (int i = 0; i < 3; i++) {
second[i] = arr[i + 3];
}
for (int i = 0; i < 3; i++) {
cout << first[i] << " " << second[i] << " ";
}
cout << endl;
return 0;
}
