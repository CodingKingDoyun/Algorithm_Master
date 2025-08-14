#include <iostream>
#include <vector>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t;
  std::cin >> t;

  std::vector<int> dp_0(41);
  std::vector<int> dp_1(41);

  dp_0[0] = 1, dp_1[0] = 0;
  dp_0[1] = 0, dp_1[1] = 1;
  for (int i = 2; i <= 40; i++) {
    dp_0[i] = dp_0[i - 1] + dp_0[i - 2];
    dp_1[i] = dp_1[i - 1] + dp_1[i - 2];
  }

  while (t--) {
    int n;
    std::cin >> n;
    std::cout << dp_0[n] << ' ' << dp_1[n] << '\n';
  }
  return 0;
}
