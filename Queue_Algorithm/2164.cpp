#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;

  queue<int> myQueue;
  for (int i = 1; i <= N; i++) {
    myQueue.push(i);
  }
  while (myQueue.size() != 1) {
    myQueue.pop();
    int temp = myQueue.front();
    myQueue.pop();
    myQueue.push(temp);
  }
  cout << myQueue.front() << '\n';
  return 0;
}