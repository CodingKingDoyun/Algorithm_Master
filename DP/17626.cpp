#include <algorithm>
#include <iostream>
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  std::cin >> n;
  int dp[n + 1];

  dp[0] = 0, dp[1] = 1;
  for (int i = 2; i <= n; i++) {
    dp[i] = i;
    for (int j = 1; j * j <= i; j++) {
      dp[i] = std::min(dp[i - j * j] + 1, dp[i]);
    }
  }
  std::cout << dp[n] << '\n';
  return 0;
}