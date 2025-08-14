#include <deque>
#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int n;
  std::cin >> n;
  std::deque<int> list;
  for (int i = 0; i < n; i++) {
    std::string tmp;
    std::cin >> tmp;
    if (tmp == "push") {
      int num;
      std::cin >> num;
      list.push_back(num);
    } else if (tmp == "pop") {
      if (!list.empty()) {
        std::cout << list.front() << '\n';
        list.pop_front();
      } else {
        std::cout << -1 << '\n';
      }
    } else if (tmp == "size") {
      std::cout << list.size() << '\n';
    } else if (tmp == "empty") {
      std::cout << (list.empty() ? 1 : 0) << '\n';
    } else if (tmp == "front") {
      if (!list.empty()) {
        std::cout << list.front() << '\n';
      } else
        std::cout << -1 << '\n';
    } else if (tmp == "back") {
      if (!list.empty()) {
        std::cout << list.back() << '\n';
      } else
        std::cout << -1 << '\n';
    }
  }

  return 0;
}