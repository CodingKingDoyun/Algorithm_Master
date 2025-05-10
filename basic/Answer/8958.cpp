#include <iostream>
using namespace std;

int main() {
  int test;
  cin >> test;

  while (test--) {
    int sum = 0, cnt = 0;
    string str;
    cin >> str;

    for (char ch : str) {
      if (ch == 'O') {
        sum += ++cnt;
      } else {
        cnt = 0;
      }
    }
    cout << sum << endl;
  }
}