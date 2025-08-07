#include <deque>
#include <iostream>
#include <vector>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int n, k;
  std::cin >> n >> k;
  std::deque<int> list;
  std::vector<int> result;
  for (int i = 1; i <= n; i++) list.push_back(i);

  int index = 1;
  while (!list.empty()) {
    for (int i = 1; i < k; i++) {
      list.push_back(list.front());
      list.pop_front();
    }
    result.push_back(list.front());
    list.pop_front();
  }
  std::cout << '<';
  for (size_t i = 0; i < result.size(); ++i) {
    std::cout << result[i];
    if (i != result.size() - 1) std::cout << ", ";
  }
  std::cout << '>' << '\n';
  return 0;
}