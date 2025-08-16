#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    std::cin >> n;
    std::unordered_map<std::string, int> category;
    for (int j = 0; j < n; j++) {
      std::string name, clothes;
      std::cin >> name >> clothes;
      category[clothes]++;
    }

    int ans = 1;
    for (auto p : category) ans *= (p.second + 1);
    std::cout << ans - 1 << '\n';
  }
  return 0;
}