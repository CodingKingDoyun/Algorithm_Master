#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int n;
  std::cin >> n;
  
  int dp[n + 1];
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i <= n; i++) {
    dp[i] = (dp[i - 2] + dp[i - 1]) % 10007;
  }
  std::cout << dp[n] << '\n';
  return 0;
}