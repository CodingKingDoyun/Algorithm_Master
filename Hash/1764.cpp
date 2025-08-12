#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int n, m;
  std::cin >> n >> m;

  std::set<std::string> list;
  std::string tmp;
  for (int i = 0; i < n; ++i) {
    std::cin >> tmp;
    list.insert(tmp);
  }
  std::vector<std::string> result;  // 정답 배열
  for (int i = 0; i < m; ++i) {
    std::cin >> tmp;
    if (list.find(tmp) != list.end()) result.push_back(tmp);
  }
  std::sort(result.begin(), result.end());
  std::cout << result.size() << '\n';
  for (auto string : result) {
    std::cout << string << '\n';
  }
  return 0;
}