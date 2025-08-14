#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;

  stack<int> myStack;
  vector<int> myArr(N, 0);
  vector<int> result(N, 0);

  for (int i = 0; i < N; i++) {
    cin >> myArr[i];
  }

  myStack.push(0);
  for (int i = 1; i < N; i++) {
    while (!myStack.empty() && myArr[myStack.top()] < myArr[i]) {
      result[myStack.top()] = myArr[i];
      myStack.pop();
    }
    myStack.push(i);
  }

  while (!myStack.empty()) {
    result[myStack.top()] = -1;
    myStack.pop();
  }

  for (int val : result) {
    cout << val << ' ';
  }
  return 0;
}