#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  bool sequence = true;
  vector<char> result;
  int N;
  cin >> N;

  int num = 1;
  stack<int> myStack;
  for (int i = 0; i < N; i++) {
    int now;
    cin >> now;

    if (now >= num) {
      while (now >= num) {
        myStack.push(num++);
        result.push_back('+');
      }
      myStack.pop();
      result.push_back('-');
    } else {
      int temp = myStack.top();
      myStack.pop();

      if (temp > now) {
        cout << "NO" << '\n';
        sequence = false;
        break;
      } else {
        result.push_back('-');
      }
    }
  }

  if (sequence) {
    for (char c : result) {
      cout << c << '\n';
    }
  }
  return 0;
}