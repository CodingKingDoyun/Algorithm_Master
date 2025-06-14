#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());
  int i = 0, j = n - 1;
  int cnt = 0;
  while (i < j) {
    if (arr[i] + arr[j] == m) {
      i++;
      j--;
      cnt++;
    } else if (arr[i] + arr[j] < m) {
      i++;
    } else
      j--;
  }
  cout << cnt << '\n';
  return 0;
}