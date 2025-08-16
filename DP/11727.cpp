#include <iostream>
#include <vector>

const int max = 101;
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int t;
  std::cin >> t;

  std::vector<long long> dp(max);

  dp[1] = dp[2] = dp[3] = 1;
  dp[4] = dp[5] = 2;
  for (int i = 6; i < max; i++) {
    dp[i] = dp[i - 5] + dp[i - 1];
  }

  for (int i = 0; i < t; i++) {
    int n;
    std::cin >> n;
    std::cout << dp[n] << '\n';
  }
  return 0;
}