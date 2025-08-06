#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  unordered_set<int> list;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    list.insert(tmp);
  }

  cin >> m;
  vector<int> result(m);
  for (int i = 0; i < m; i++) {
    int tmp;
    cin >> tmp;
    if (list.find(tmp) != list.end()) {
      result[i] = 1;
    } else {
      result[i] = 0;
    }
  }

  for (int num : result) {
    cout << num << '\n';
  }
  return 0;
}