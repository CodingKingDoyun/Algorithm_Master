#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int n, m;
  std::cin >> n >> m;
  std::unordered_map<std::string, std::string> list;

  std::string url, password;
  for (int i = 0; i < n; ++i) {
    std::cin >> url >> password;
    list[url] = password;
  }
  for (int i = 0; i < m; ++i) {
    std::cin >> url;
    std::cout << list[url] << '\n';
  }
  return 0;
}