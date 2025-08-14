#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> data(n);

  for (int i = 0; i < n; i++) {
    cin >> data[i].first >> data[i].second;
  }

  sort(data.begin(), data.end(), [](pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) {
      return a.first < b.first;
    } else {
      return a.second < b.second;
    }
  });

  for (auto num : data) {
    cout << num.first << ' ' << num.second << '\n';
  }
  return 0;
}