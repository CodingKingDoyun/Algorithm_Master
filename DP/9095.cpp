#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int dp[11 + 1];
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;
  for (int i = 4; i <= 11; i++) {
    dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
  }

  int t;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    std::cin >> n;
    std::cout << dp[n] << '\n';
  }
  return 0;
}