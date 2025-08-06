#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> list(n);
  for (int i = 0; i < n; i++) {
    cin >> list[i].first >> list[i].second;
  }

  vector<int> grade(n);
  for (int i = 0; i < n; i++) {
    int k = 1;
    int cur[2] = {list[i].first, list[i].second};
    for (int j = 0; j < n; j++) {
      if (j == i) continue;
      if (cur[0] < list[j].first && cur[1] < list[j].second) {
        k++;
      }
    }
    grade[i] = k;
  }

  for (auto num : grade) {
    cout << num << ' ';
  }
  return 0;
}