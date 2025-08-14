#include <iostream>
#include <vector>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int n, k;
  std::cin >> n >> k;

  std::vector<int> coinValue(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> coinValue[i];
  }

  int cnt = 0;
  for (int i = n - 1; i >= 0; --i) {
    if (k == 0) break;
    cnt += k / coinValue[i];
    k %=coinValue[i];
  }
  std::cout << cnt << '\n';
  return 0;
}