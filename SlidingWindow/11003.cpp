#include <deque>
#include <iostream>
using namespace std;
typedef pair<int, int> node;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, L;
  cin >> N >> L;

  deque<node> myDeque;
  for (int i = 0; i < N; i++) {
    int now;
    cin >> now;

    while (myDeque.size() && myDeque.back().first > now) {
      myDeque.pop_back();
    }
    myDeque.push_back(node(now, i));
    if (myDeque.front().second <= i - L) {
      myDeque.pop_front();
    }
    cout << myDeque.front().first << ' ';
  }
  return 0;
}