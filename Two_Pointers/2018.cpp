#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  int start = 1, end = 1;
  int sum = 1, cnt = 1;

  while (end != n) {
    if (sum == n) {
      end++;
      sum += end;
      cnt++;
    } else if (sum < n) {
      end++;
      sum += end;
    } else {
      sum -= start;
      start++;
    }
  }

  cout << cnt << '\n';
  return 0;
}