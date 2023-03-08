// Write a program to find Fibonacci series up to n
#include <iostream>
using namespace std;
void Fibonacci(int a) {
  int x = -1, y = 1, c;
  for (int i = 0; i < a; i++) {
    int c = x + y;
    cout << c << "\t";
    x = y;
    y = c;
  }
}

int main() {
  int ok = 8;
  Fibonacci(ok);

  return 0;
}
