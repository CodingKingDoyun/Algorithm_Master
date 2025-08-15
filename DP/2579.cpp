#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int n;
  std::cin >> n;
  std::vector<int> score(n + 1);
  for (int i = 1; i <= n; i++) {
    std::cin >> score[i];
  }

  int dp[301];
  dp[1] = score[1];
  dp[2] = score[1] + score[2];
  dp[3] = std::max(score[1] + score[3], score[2] + score[3]);

  for (int i = 4; i <= n; i++) {
    dp[i] = std::max(dp[i - 2] + score[i], dp[i - 3] + score[i - 1] + score[i]);
  }
  std::cout << dp[n] << '\n';
  return 0;
}