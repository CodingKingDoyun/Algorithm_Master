#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << ' ';
    }
    for (int j = 0; j < (n * 2) - (i * 2) - 1; j++) {
      cout << '*';
    }
    cout << '\n';
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 2; j++) {
      cout << ' ';
    }
    for (int j = 0; j < i * 2 + 3; j++) {
      cout << '*';
    }
    cout << '\n';
  }
  return 0;
}