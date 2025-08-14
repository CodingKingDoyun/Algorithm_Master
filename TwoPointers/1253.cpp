#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++) cin >> arr[i];
  sort(arr.begin(), arr.end());

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int find = arr[i];
    int start = 0, end = n - 1;

    while (start < end) {
      if (arr[start] + arr[end] == find) {
        if (start != i && end != i) {
          cnt++;
          break;
        } else if (start == i) {
          start++;
        } else if (end == i) {
          end--;
        }
      } else if (arr[start] + arr[end] < find) {
        start++;
      } else
        end--;
    }
  }

  cout << cnt << '\n';
  return 0;
}